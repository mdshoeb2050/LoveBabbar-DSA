// i/p : {3,4,5,1} 
// peak element is : 5

#include<iostream>
using namespace std;

int findPeak(int arr[], int n){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){// To avoid extra comparison don't use s<=e
    // Yaha sirf 2 hi case ho sakta hai.
       // case-1 : if element is less than next element : Peak ki taraf jayenge 
       if(arr[mid]<arr[mid+1]) {
            // going to peak 
            s=mid+1;
       }
       else{
         //case-2 :  if element is Greater than next element : bechare (e) ko upar(peak) par lane ki koshish karenge
          e=mid;    // mid-1 : karenge to peak ke us par chale jayenge , Peak par nahi pahuch payenge
       }
       // update mid
        mid=s+(e-s)/2;
    }
    return s;  // e ko bhi return kar sakte h
}

int main(){
    //int arr[]={0,1,0};
    //int arr[]={3,4,5,1};
    int arr[]={0,10,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array size is : "<<size<<endl;
    int ans =findPeak(arr,size);
    cout<<"Index of Peak element in Mountain Array is  : "<<ans<<endl;
    cout<<"Peak element is : "<<arr[ans]<<endl;
    return 0;
}