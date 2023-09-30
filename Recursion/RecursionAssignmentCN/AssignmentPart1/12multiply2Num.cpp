#include<iostream>
using namespace std;
int multiply(int x, int y){
    if(x<y)               // base case for swapping numbers
      return multiply(y,x);  // here swapping is done
    else if(y!=0)  // yadi pahla number 0 nahi hai tab 
       return (x + multiply(x,y-1));  // recursive call at smaller value
    else   // yadi dono no  me se koi bhi 0 hogi to return 0 karenge
       return 0;
}
int main(){
    int a,b;
    cout<<"Enter two numbers for multiplication : "<<endl;
    cin>>a>>b;
    cout<<"Result is : "<<multiply(a,b);
    return 0;
}