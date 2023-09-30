// selection sort : school ki Assembly me hua bar bar selection 
// Har ek ith ke liye j pura Arrray traverse karega 
// Two pointer Approach : i < size-1    and j=i+1 se j< size 


#include<iostream>
using namespace std;

// implementin selection sort Algorithm
void selectionSort(int arr[], int size){
    //using Two pointer approcah 
    int i, j;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[]={32,4,10,456,02,45,222,122};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    cout<<"Before Sorting..."<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr,size);
    cout<<"\nAfter Sorting..."<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
} 
