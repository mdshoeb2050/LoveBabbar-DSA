//Bubble sort : In each step the nth largest element would come at the nth position
//Har bar ek ek element last se sorted hota jayega 

#include<iostream>
using namespace std;
// implementing bubble sort Algo
void bubbleSort(int arr[], int size){
 int i,j, flag;  // flag hi to humare bubble sort Algo ko efficient banata hai
 for(i=0; i<size-1; i++)
 {  
    flag=0;  
     for(j=0; j<size-1-i; j++) // yaha par (-i) ka matlab har iteration ke bad last se ek element sorted hota jayega to hume pura Array traverse karne ki koi need nahi hai.
     {
        if(arr[j]>arr[j+1])  // khud ko aage wale se compare karo ; { Bhai tu mere se chhote hai kya..}
        {
           swap(arr[j],arr[j+1]);
           //now updating flag status
           flag=1;
        }
     }
     if(flag==0) break;  // Agar flag humara ab bhi 0 hai to it means Array is already sorted no need to proceeed further 
 }
    
}

int main()
{
    int arr[]={32,4,10,456,02,45,112,1005};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    cout<<"Before Sorting..."<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    // calling function 
    bubbleSort(arr,size);
    cout<<"\nAfter Sorting..."<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
} 