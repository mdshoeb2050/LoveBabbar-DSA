//#include<bits/stdc++.h>
using namespace std;
// program to check string is palindrome or Not using recursion

bool checkRecursive(char str[],int s, int e){
    // base case  for single character
    if(s==e) return true; // here both pointers (s,e) are pointing same character in string

    // base case in case first and Last character does not match
    if(str[s]!=str[e]) return false;

    // Recursive call for small substrings in string 
    if(s<e+1) return checkRecursive(str,s+1,e-1);
    //else
    return true;
}
bool checkPalindrome(char str[]){
    int n=strlen(str);
    // condition for empty string (Test case)
    if(n==0) return true;

    return checkRecursive(str,0,n-1);
}

int main(){
    char str[]="racecar";
    if(checkPalindrome(str))
      cout<<"String --> "<<str<<" --- is Palindrome"<<endl;
    else
      cout<<"String is NOT palindrome"<<endl;
    return 0;
}