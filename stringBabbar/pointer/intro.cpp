#include<iostream>
using namespace std;
int main(){
     int a =10;
     int *p =&a;
    cout<<p<<endl;  //0x61ff04  //value inside p
    cout<<*p<<endl;  //10
    cout<<&a<<endl;  //0x61ff04 
    cout<<sizeof(p)<<endl;  // 4  (size of pointer system dependent)
     int *ptr=NULL;
     cout<<"Output is -"<<*ptr<<endl;  // segmentation fault
    return 0;
}