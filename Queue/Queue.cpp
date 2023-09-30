#include<iostream>
using namespace std;

#include "QueueUsingArray.h"

int main(){
    // creating a object using QueueUsingArray
    myQ <int> q(5);

    q.enq(10);
    q.enq(20);
    q.enq(30);
    q.enq(40);
    q.enq(50);
    q.enq(60);  // Queue is Full

    cout<<q.front()<<endl;

    cout<<q.dq()<<endl;
    cout<<q.dq()<<endl;
    cout<<q.dq()<<endl;

    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
}