#include<iostream>
using namespace std;

#include"8stackUsingLLgfg.h"



 //Driver program 
 int main(){
    myStack s1; 
    s1.push(500);
    s1.push(1000);
    s1.push(1500);
    s1.push(2000);
    s1.push(2500);
    s1.push(3000);
    s1.push(3500);
    s1.push(4000);
    s1.push(4500);
    s1.push(5000);

    cout<<"\nElement pushed in stack by the User is .... "<<endl;
    s1.display();

    cout<<"\n\nTop element is : "<<s1.peek()<<endl;
    cout<<"\nDeleting some element from stack..."<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

    cout<<"\nAfter popping Elements left in stack  is .... "<<endl;
    s1.display();
    cout<<"\n\nTop element is : "<<s1.peek()<<endl;

    cout<<"\nIs stack is empty : "<<s1.isEmpty()<<"\n\n";
    return 0;

 }

 /*
 
Element pushed in stack by the User is .... 
5000->4500->4000->3500->3000->2500->2000->1500->1000->500

Top element is : 5000

Deleting some element from stack...
5000
4500
4000
3500

After popping Elements left in stack  is .... 
3000->2500->2000->1500->1000->500

Top element is : 3000

Is stack is empty : 0
*/