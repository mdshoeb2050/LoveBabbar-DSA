#include<iostream>
using namespace std;
void func(int * p){
    p=p+1;
}
void func2(int * p){
    *p=*p+1;   // value override ho gayin --- using dereferencing operator
}
int main(){
    int a =5;
    int *p =&a;

     cout<<"Before - "<<p<<endl;  //0x61ff08  {printing value inside pointer p -- means address of a variable}
     cout<<"Before -"<<*p<<endl;  //5
     func(p);
     cout<<"After - "<<p<<endl;  //0x61ff08
     cout<<"After - "<<*p<<endl;  //5

    //------MAGIC STARTS HERE
      func2(p);
     cout<<"After - "<<p<<endl;  //0x61ff08
     cout<<"After - "<<*p<<endl;  //6

    return 0;


}
