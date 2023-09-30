#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid=(s+e)/2;
    //calculating left and right length so that i can creat size of temp array
    // left length
    int m=mid-s+1;
    // right length
    int n=e-mid;
    //creating temp array dynamicallly using new keyword
    //left value store karne ke liye
    int* left  = new int [m];
    //right value store karne ke liye
    int* right = new int [n];

    //ab original array se value ko copy karenge temp arrays me
    int originalIndex=s; // isme start nahi set karenge to value kaise copy karenge left array me
    for(int i=0; i<m; i++){
        left[i]=arr[originalIndex++];
    }
     originalIndex=mid+1; // similarly idhar bhi  taki rigt wale array me value copy kar paye original array se
     for(int i=0; i<n; i++){
        right[i]=arr[originalIndex++];
    }
    // Now we have two sorted array
    // we have to merge them
    
    int leftIndex=0;
    int rightIndex=0;
    //original array me start ka pointer rakhenge
    originalIndex=s; // here s==0

    while(leftIndex<m && rightIndex<n){ // traversing whole 2 arrays 
        if(left[leftIndex]<right[rightIndex]){  // dono arrays ke elements ko  compare karke original array me store karte jayenge  
            arr[originalIndex++]=left[leftIndex++];
        }
        else{
            arr[originalIndex++]=right[rightIndex++];
        }
    }
    // bache huye elements ko original array me store kar lenge because  Already they are  all in sorted order
    while (leftIndex < m){
       arr[originalIndex++]=left[leftIndex++];   
    }
    while (rightIndex < n){
       arr[originalIndex++]=right[rightIndex++];   
     }
    

}

void mergeSort(int arr[],int s,int e){
    int mid=(s+e)/2;
    // base case
    if(s>=e) return;

    // left call
    mergeSort(arr,s,mid);
    
    //right call
    mergeSort(arr,mid+1,e);

    //merging
    merge(arr,s,e);
}

int main(){
    //int arr[]={3,6,1,8,2,4,9,20};
    int arr[]={5,20,45,30,25,10,28,40};
    int size=8;
    mergeSort(arr,0,size-1);
    cout<<"After sorting final Sorted array is: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
After sorting final Sorted array is: 
5 10 20 25 28 30 40 45 
*/