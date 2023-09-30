#include<iostream>

//using stack library 
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(51);
    s.push(52);
    s.push(53);
    s.push(54);
    s.push(55);
   

    cout<<"Topmost element is :"<<s.top()<<endl;

    cout<<"\nPopping some elements... "<<endl;
    s.pop();
    s.pop();
    
    cout<<"\nAfter popping Elements left in stack  is .... "<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


}