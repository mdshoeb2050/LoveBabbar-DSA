#include<bits/stdc++.h>
using namespace std;
void solve(string tiles, string &output, set<string> &result, map<int,bool> &visited){
  for(int i=0; i<tiles.length(); i++){ //  Here we are using loop To traverse each character 
     if(visited[i]==0) // yadi wo char pahle hi visit ho chuka hai to ye condition false ho jayega
     {
         char ch=tiles[i];
         output.push_back(ch); // specific  char ko output string 
         visited[i]=1;  // mark that character
         result.insert(output);  //store output string into  result set
         solve(tiles,output,result,visited);
         output.pop_back();  //Backtracking
         visited[i]=0;      //Backtracking  --> phir se wapas se us char ko unvisit kar denge 
     }
  }
}
int numTilePossibilities(string tiles){
    string output=" ";
    // here we are using set for storing unique elements
    set<string> result;
    // here we are using MAP to track which has been included in the output string 
    map<int,bool> visited;
    // fun calling 
    solve(tiles,output,result,visited);
    return result.size();
}
int main(){
    //string s="AAB";  //8
    string s="AAABBC";  //188
    int size=numTilePossibilities(s);
    cout<<size<<endl;
}