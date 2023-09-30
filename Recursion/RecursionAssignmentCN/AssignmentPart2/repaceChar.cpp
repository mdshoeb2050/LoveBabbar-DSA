#include<iostream>
using namespace std;

void replaceChar(char s[], char taregt , char repChar){
   // base case 
   if(s[0]=='\0')  
       return;
   if(s[0]!=taregt)
       replaceChar(s+1,taregt,repChar);
   else{
       s[0]=repChar;
       replaceChar(s+1,taregt,repChar);
   }

}
int main(){
    char arr[100];
    char a,b;
    cout<<"Enter a string :"<<endl;
    cin>>arr;
    cout<<"Enter a charater which u want to replace: "<<endl;
    cin>>a;
    cout<<"Enter a new  character for that position which u wanted to be repalced :"<<endl;
    cin>>b;
    replaceChar(arr,a,b);
    cout<<"the final string is : "<<arr<<endl;
}

/*

Enter a string :
kakka
Enter a charater which u want to replace: 
k
Enter a new  character for that position which u wanted to be repalced :
p
the final string is : pappa
*/