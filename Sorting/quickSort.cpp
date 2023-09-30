#include<iostream>
using namespace std;

int partition(int arr[], int s , int e){
    int mid=(s+e)/2;
    int pivot=arr[s]; // yaha humne starting element ko humne  pivot element mana hai
    //finding count of elements which are smaller than pivot
    int count=0;  
      for(int i=s+1; i<=e ; i++){
        if(arr[i]<pivot){
            count++;   // yaha count var count rakhega ki kitne aise elements hai jo pivot se chhote hai
        }
    }
    // sun pivot tere ko sahi jahag par set karna hai aur aisa set karenge ki tere left side smaller value and right side greater value rahega
    // Now finding right position for pivot element
    int pivotIndex=s+count;
    //swapping
    swap(arr[pivotIndex],arr[s]);
    //handle left and right parts 
    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        // Case1: if Already smaller elements on left side
        while(arr[i]<=pivot){
            i++;
        }
        // Case2:   if Already larger elements on Right side
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    } 
   return pivotIndex;
}



void quickSort(int arr[],int s, int e){
    // base case
    if(s>=e) return;

    int pIndex=partition(arr,s,e);
    quickSort(arr,s,pIndex-1);
    quickSort(arr,pIndex+1,e);
    
}
int main(){
    int arr[]={12,11,13,78,49,77,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);  //24/4=6
    quickSort(arr,0,size-1);
    // printing the results
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
/*
Sorted array is :
5 6 7 11 12 13 49 77 78 
*/