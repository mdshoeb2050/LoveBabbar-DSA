#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
      return 1;
    else
      return n*fact(n-1);
}
int main(){
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    cout<<"Factorial is : "<<fact(num)<<endl;
    return 0;
}