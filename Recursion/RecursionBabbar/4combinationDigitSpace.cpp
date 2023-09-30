#include<iostream>
using namespace std;
void findCombinations(string input , int i, string output){
     // base case
     if(i==input.length()){
         cout<<output<<endl;
         return;
     }
     char ch=input[i];
     // No space -> put character without space
     output.push_back(ch);
     findCombinations(input,i+1,output);

     // With space -> put character with space 
     output.push_back(' ');
     if(input[i+1]!='\0')
        findCombinations(input,i+1,output);
}
int main(){
    string str, output;
    cout<<"Enter a string : "<<endl;
    cin>>str;
    findCombinations(str,0,output);
    return 0;
}


/*
Enter a string : 
123
123
12 3
1 23
1 2 3
*/
