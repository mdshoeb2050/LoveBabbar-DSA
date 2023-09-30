 //Dynamic Stack 
 //Implementation of STACK using Linked list
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node *link;
   
   //constructor 
   Node (int data){
     this->data=data;
     this->link=NULL;
   }
 };

//*********************************************************************

  //->>>>>>>> Creating class for STACK  <<<<<<<<<<<<<---
  
  class myStack{
    //creating a pointer  (top) which will point nodes of stack 
    Node *top;
    public:
    //constructor 
    myStack(){
       top= NULL;
    } 
   //Push method
   void push(int data){
      //1.Creating node dynamically  - Each time when push fun called temp ptr will get new ADDRESS
      Node *temp =new Node(data);
      //check for stack overflow 
      if(!temp){
        cout<<"\nStack Overflow....."<<endl;
        exit(1);
      }
      //operations
      temp->data=data;
      temp->link=top;  //now top will point that node
      top=temp;        // temp ka control top ko gaya  Now top can point 
   }

   // isEmpty() method
   bool isEmpty(){
     // Agr top pointer me NULL hoga to stack empty hoga
     return top==NULL;
   }

   //peek() method  this will return TOP  element of stack
   int peek(){
    //check 
    //Agr stack empty nahi hai to  return top->data;
    if(!isEmpty())
        return top->data;
    else 
        exit(1); //Agr stack empty h to 
   }

   //pop() method will delete the topmost element of stack 
   void pop(){
    //check for UnderFlow  (if top becomes NULL)
    if(top == NULL){
        cout<<"\n Stack is Underflow. Stack khali hai be "<<endl;
        exit(1);
    }

    //operations--  yadi stack empty nahi hai to 
    Node *temp;
    // top abhi jis element ko point kar raha hai us node ka control temp ko de denge
    temp=top;
    // top ko ab next(previous wla element in stack ) node par point karenge 
    top=top->link;
    // Ab hum temp ptr ko delete kar denge jisme node ka address hai
    cout<<temp->data<<endl;
    free(temp);
   }

   void display(){
    //check if stack is Empty
    if(top == NULL){
        cout<<"\n Stack khali hai be Kuch bhi Print nahi hoga . "<<endl;
        exit(1);
    }

    //otherwise  creating a ptr that will traverse whole node in the stack so that it can print all nodes in stack 
    Node *temp; 
    temp=top;   //  top ko abhi sabse topmost node ka address pata h 
    
    //while loop
    while(temp!=NULL){
        cout<<temp->data;
       // cout<<"->";  //Aisa karnege to last me bhi arrow lag jayega
        temp=temp->link;

        if(temp!=NULL){
            cout<<"->";
        }
    }
   
   }

 };
