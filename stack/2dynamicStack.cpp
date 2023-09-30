#include<iostream>
#include<climits>
using namespace std;

class StackUsingArray {
   int *data , nextIndex , capacity;
   public:
     // we will modify constructor bcoz we don't need user input 
      StackUsingArray(){
         data = new int[4]; // apne man se koi bhi value de denge bad me double hota jayega 
         nextIndex=0;
         capacity=4;
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
        // checking for empty stack
        if(isEmpty()){
            cout<<"Stack is Empty , There is no element in stack."<<endl;
            return INT_MIN;
        }
        // agar stack me element h to phir ptr ko ek kadam peeche lakar us index ki value ko return kar denge 
        return data[nextIndex-1];
    }


    // Modification in  push method  ***Most important step ***

    void push(int element){
       //checking
       if(nextIndex==capacity)
       {
          // Ab yaha kuchh bhi print karane ki jarurat nahi h Bcow we have created dynamic Stack 
         // Dynamically creating double size Array
         int *newData= new int[2*capacity];
         
         // copying old array elements into new array
         for(int i=0; i<capacity; i++){
            newData[i]=data[i];
         }
         //updating capacity 
         capacity *= 2;  // Ab Array ka size Double ho gaya hai

         // Deallocating old array address that contain data pointer 
         delete []data;   // []data - iska matlab *(data) value inside data ptr will be deleted

         // now old pointer (data ) will point to newArray 
         data =newData;   // control of Mirzapur
       }

       // else 
       //otherwise simply insert element that index in that array
       data[nextIndex]=element;
       nextIndex++;
    } 

    //pop method 
    int pop(){
        //checking for empty stack
        if(isEmpty()){
            cout<<"Stack is Empty. Kuch bhi delete nahi ho payega. "<<endl;
            return INT_MIN;
        }

        //otherwise  simply decrement index(bcoz already humara index aage hi hota hume ek kadam peeeche layenge) and
        nextIndex--; 
        // {ab curernt index ki value} ko return kar denge aur bad me koi element push karega to isi index par override ho jayega 
        return data[nextIndex];
    }
};



int main(){
    StackUsingArray s1; 
    s1.push(15);
    s1.push(25);
    s1.push(35);
    s1.push(45);
    s1.push(55);
    s1.push(65);  
    s1.push(75);
    s1.push(85);
    s1.push(95);
    cout<<"Top of the stack "<<s1.top()<<endl;

    cout<<"Deleting some elements...."<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<"Now size of the stack is : "<<s1.size()<<endl;

    cout<<"Checking stack is empty  : ";
    if(s1.isEmpty()) 
         cout<<" Yes "<<endl;
    else
        cout<<" No "<<endl;
}
/*
Top of the stack 95
Deleting some elements....
95
85
75
Now size of the stack is : 6
Checking stack is empty  :  No
*/