#include<iostream>
using namespace std;
void func(int * p){  //address copy hua hai udhar main me koi effect nahi padega
    p=p+1;
}
int main(){
    int a =5;
    int *p =&a;
    /*
    cout<<a<<endl; //5
    cout<<&a<<endl;  //0x61ff0c
   // cout<<*a<<endl;  //operand of '*' must be a pointer but has type "int"
    cout<<p<<endl;  //0x61ff0c
    cout<<&p<<endl;  //0x61ff08  --(pointer ka khud ka Address)
    cout<<*p<<endl;   //5
     */
     cout<<"Before "<<p<<endl;
     cout<<"Before "<<*p<<endl;
     func(p);
     cout<<"After "<<p<<endl;
     cout<<"After "<<*p<<endl;

    return 0;
}

