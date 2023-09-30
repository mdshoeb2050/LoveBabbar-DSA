#include<iostream>
using namespace std;

#include "DynamicQueue.h"

int main(){
    // creating a dynamic object using myQ class
    // here we don't need user input  

    myQ <int> q;
 
    cout<<"Inserting elements into queue ...."<<endl;
    q.enq(10);
    q.enq(20);
    q.enq(30);
    q.enq(40);
    q.enq(50);
    q.enq(60);  //  Ab full hone ka msg print nahi hoga  chahe jitna input lo queue me 

    cout<<"Front element is :"<<q.front()<<endl;

    cout<<"Deleting some  elements into queue ...."<<endl;
    cout<<q.dq()<<endl;
    cout<<q.dq()<<endl;
    cout<<q.dq()<<endl;

    cout<<"Now size of the Queue is : "<<q.getSize()<<endl;
    
    cout<<"Is Queue is Empty ? "<<q.isEmpty()<<endl;
}