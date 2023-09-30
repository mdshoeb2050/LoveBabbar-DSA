//implenting stack from scratch 
#include<climits>
#include<iostream>
using namespace std;

class StackUsingArray {
   int *data , nextIndex , capacity;
   public:
     // constructor - user se stack ka size pata karenge
      StackUsingArray(int totalsize){
         data = new int[totalsize];
         nextIndex=0;
         capacity=totalsize;
      }
    
    // creating function (methods) - push , pop, size , isEmpty , top

    // size method - how many no of elements present in array(stack)
    int size(){
        return nextIndex;
    }
  
    // isEmpty method
    bool isEmpty(){
        /* 
        if(nextIndex==0) 
             return true;
        else
            return false;
        */
       return nextIndex==0;  // if  0==0 (T).... otherwise N==0 (F)
    }
    // top method 
    int top(){
        if(isEmpty()){
            cout<<"Stack is alredy empty you can't pop elements."<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1]; // index ptr ko ek kadam peeche layenge 
    }

    // push method 
    void push(int element){
       //checking
       if(nextIndex==capacity){
         cout<<"Stack is FULL "<<endl;
         return ;
       }
       //otherwise simply insert element that index in that array
       data[nextIndex]=element;
       nextIndex++;
    } 

    //pop method 
    int pop(){
        //checking for empty stack
        if(isEmpty()){
            cout<<"Stack is Empty. "<<endl;
            return INT_MIN;
        }
        //otherwise  simply decrement index(bcoz already humara index aage hi hota hume ek kadam peeeche layenge) and return that element 
        nextIndex--; 
        // ab curernt index ki value ko return kar denge aur bad me koi element push karega to isi index par wo value  override ho  jayega 
        return data[nextIndex];
    }
};