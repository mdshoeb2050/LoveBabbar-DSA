#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1)
      return n;
    else
      return fibo(n-1)+fibo(n-2);
      // Basic concept to understand call stack 
      /*  
      int res1=fibo(n-1);   //line 11
      int res2=fibo(n-2);    // line 12
      return res1+res2;
      
      
      */
   /* int result=fibo(n-1)+fibo(n-2);
    return result; */
}
int main(){
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    cout<<num<<"th term of fibonacci series  is   : "<<fibo(num)<<endl;
    return 0;
}
/*
Enter a number :
6
6th term of fibonacci series  is   : 8
*/