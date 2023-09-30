#include<iostream>
#include<stack>
using namespace std;


    void sortedInsert(stack<int>&s, int data){  // har bar data variable me sortStack fun se top ki value aati rahegi
        //base case
        if(s.empty() || s.top()<data){
            s.push(data);
            return ;
        }
        //storing top element of stack
        int topElement=s.top();
        s.pop();

        //recursive call
        sortedInsert(s,data);

        s.push(topElement);
    }

   
    void sortStack(stack<int>&s){
        //base case
        if(s.empty()) return ;

        int topElement=s.top();
        s.pop();

        //recursive call
        sortStack(s);
         

         // ye recursive fun call hone ke bad ye fun bar bar call hoga 
        //calling another fun for inserting value into stack 
        sortedInsert(s,topElement);
        
    }


int main(){
    stack<int> s;
    // s.push(2);
    // s.push(4);
    // s.push(1);
    // s.push(3);

    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);
    //fun call
    sortStack(s);


    // printing stack 
    cout<<"Printing stack"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}

