#include<iostream>
using namespace std;
int lastIndex(int a[],int size,int k){
    if(size<0)  //base case 1
       return -1;
    if(a[size]==k)  // base case 2
      return size; // returning last index of target element

    return lastIndex(a,size-1,k);  // recursive call
}

int main(){
     int a[]={9,8,9,4,6,5,1,6,100};
     /* Jab array me Duplicate Element hoga to  last wale duplicate element 
     ka index return hoga kyuki recursively iterate kar rahe hai Array ko last se
      Element 6 is present at index ->7
    */
     int size=sizeof(a)/sizeof(a[0]);
     int target=6;
     int result=lastIndex(a,size,target); 

     if(result != -1) // -1 alawa koi other value to chalega 
      cout<<"Element "<< target <<" is present at index - "<<result<<endl;
     else // -1 ke case me
      cout<<"Element "<< target <<" is not present in the array."<<endl;
     return 0;
}

/*
 Element 6 is present at index ->7 
*/