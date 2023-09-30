#include<iostream>
using namespace std;

void removeD(char s[]){
    int i=0;
   // base case for empty string 
   if(s[i]=='\0') return;
   //if prev and next char dont match
   if(s[i]!=s[i+1])  removeD(s+1);
   // if matched then use shifting logic using j variable
   if(s[i]==s[i+1]){
       int j=0;
       for(; s[j]!='\0';j++){
          s[j]=s[j+1];
       }
       s[j]=s[j+1];
       removeD(s);   // after shifting again calling same string
   }
       
}
int main(){
    char s[100];
    cout<<"Enter a string : "<<endl;
    cin>>s;
    removeD(s);
    cout<<"After removing consecutive duplicates final output is : "<<endl;
    cout<<s<<endl;
    return 0;
}

/*
Enter a string : 
aabccba
After removing consecutive duplicates final output is : 
abcba


Enter a string : 
xxxyyyzwwzzz
After removing consecutive duplicates final output is : 
xyzwz
*/