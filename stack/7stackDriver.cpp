#include<iostream>
using namespace std;

#include "1StackUsingArray.cpp" // scratch se bana rahe hai stack

int main(){
    StackUsingArray s1(5); // constructor ko call karke size 5 bata diya 
    s1.push(15);
    s1.push(25);
    s1.push(35);
    s1.push(45);
    s1.push(55);
    s1.push(65);  // stack full

    cout<<s1.top()<<endl;

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<s1.size()<<endl;

    cout<<s1.isEmpty()<<endl;
}
/*
Stack is FULL 
55
55
45
35
2
0
*/