#include<iostream>
using namespace std;
// C++ program to remove x element from a given string in input
void removeX(char str[], char x){
    // in case of empty string 
    if(str[0]=='\0') return;
    //if first index element dont match with target element 
    if(str[0]!=x){ 
       removeX(str+1,x);
    } //if first index get  matched with target element 
    else {
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];  //shifting of characters
        }
        str[i-1]=str[i]; // shifting of '\0' 
        removeX(str,x);  // again calling for same string 
    }
}

int main(){
    char s[100];
    char target;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<"Enter target character which you want to remove from string :"<<endl; 
    cin>>target;
    cout<<"Your input string is : "<<s<<endl;
    removeX(s,target);
    cout<<"After removing "<<target<<" character from string output is :"<<s<<endl;
    //cout<<s<<endl;
    return 0;
   
}

/*
Enter a string :
abxcdxdxefxgh
Enter target character which you want to remove from string :
x
Your input string is : abxcdxdxefxgh
After removing x character from string output is :abcddefgh

Enter a string :
mrxshoeb
Enter target character which you want to remove from string :
x
Your input string is : mrxshoeb
After removing x character from string output is :mrshoeb

Enter a string :
addzdezhggdzhshszzziizzxcv
Enter target character which you want to remove from string :
z
Your input string is : addzdezhggdzhshszzziizzxcv
After removing z character from string output is :adddehggdhshsiixcv 
*/