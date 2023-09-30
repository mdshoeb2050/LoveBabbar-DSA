#include<iostream>
using namespace std;

void fun(int *arr){
    *(arr+2)=*(arr+2)+1;  // element 5 ko hatake , 6 ko assign kar diya
}
int main(){
    int arr[]={3,4,5};
    fun(arr);
    cout<<arr[0]<<endl;  //3
    cout<<arr[1]<<endl;  //4
    
    cout<<arr[2]<<endl;  //6
   
    return 0;
}