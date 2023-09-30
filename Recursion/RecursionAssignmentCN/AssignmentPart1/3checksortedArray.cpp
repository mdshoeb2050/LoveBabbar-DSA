#include<iostream>
using namespace std;
bool is_sorted(int a[],int size){
    if(size==0 || size==1)
       return true;
    if(a[0]>a[1])  // Comparison
       return false;
       //Fun Calling on subArray is start from here
    bool isSmallerSorted=is_sorted(a+1,size-1);  //Recursion logic
    if(isSmallerSorted)
        return true;
    else
       return false;
}
int main(){
    int arr[5]={3,8,5,6,7};
    int size=5;
    int result=is_sorted(arr,5);
    if(result)
       cout<<"Array is Sorted."<<endl;
    else
       cout<<"Array is Not Sorted."<<endl;
    return 0;
}