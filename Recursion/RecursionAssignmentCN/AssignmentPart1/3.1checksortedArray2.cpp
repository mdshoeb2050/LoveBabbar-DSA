// 2 method 
#include<iostream>
using namespace std;
bool is_sorted2(int a[],int size){
    if(size==0 || size==1) return true;

   //Fun Calling on subArray is start from here
    bool isSmallerSorted=is_sorted2(a+1,size-1);  //Recursion logic
    if(!isSmallerSorted)
        return false; // false hone par -> false dega  (Bcoz !F=T)

    // Now perform Comparison 
      if(a[0]>a[1])  // Comparison
        return false;   // (T -> F)
      else 
        return true;  // condition false hone par -> true (F -> T)
  
}
int main(){
    int arr[5]={10,20,89,40,50};
    int size=5;
    int result=is_sorted2(arr,5);
    if(result)
       cout<<"Array is Sorted."<<endl;
    else
       cout<<"Array is Not Sorted."<<endl;
    return 0;
}

//Array is Not Sorted.