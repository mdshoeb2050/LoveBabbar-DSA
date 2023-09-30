#include<iostream>
using namespace std;


void merge(int arr[], int s ,int e){
    // sabse pahle mid pata karenge
    int mid=(s+e)/2;
    // finding leftlength  and rightlength
    int m=mid-s+1;
    int n=e-mid;

    // creating left and right parts (temp arrays to copy values) 

    int* left=new int  [m];
    int* right=new int [n];

    //copying values into left array
    int originalIndex=s;
    for(int i=0;i<m; i++){
        left[i]=arr[originalIndex++];
    }

    // copying value  into right array
     originalIndex=mid+1;
    for(int i=0;i<n; i++){
         right[i]=arr[originalIndex++];
    }

    // Now we have 2 sorted arrays 
    // ab merge ka time aa gaya hai
    int l=0;  //leftindex
    int r=0;  //rightindex
    originalIndex=s;
      while(l<m && r<n){
          if(left[l]<=right[r]){
              arr[originalIndex++]=left[l++];
          }
          else{
              arr[originalIndex++]=right[r++];
          }
      }
  // bache huye  elements ke liye
  while(l<m){
      arr[originalIndex++]=left[l++];
  }
  while(r<n){
      arr[originalIndex++]=right[r++];
  }
}
void mergeSort(int arr[],int s, int e){
    // base case
    if(s>=e) return;
        int mid=(s+e)/2;

        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        //merging two sorted arrays
        merge(arr,s,e);
}

int main(){
    int arr[]={12,11,13,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);  //24/4=6
    mergeSort(arr,0,size-1);
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
5 6 7 11 12 13 
*/

