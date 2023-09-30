#include<iostream>
using namespace std;

template<typename  T>
class Node{
    public :
       T data;
       Node<T> *next;
       //constructor 
       Node(T data){
        this->data=data;
        next=NULL;
       }
};

template<typename T>
class stack{
    Node<T> *head;
    int size;   //no of element present in stack
 public :
     //constructor
     stack(){


     }

     int getSize(){


     }

     bool isEmpty(){


     }

     void push(T element ){



     }

     T pop(){

     }

     T top(){

     }

};