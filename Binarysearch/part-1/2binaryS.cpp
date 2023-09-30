//Binary search : Element find kare matr O(log(n)) time me 
// 1: mid find karna 
// 2: compare karna  
// 3: start / end ko update karna according ko condition 
// 4: mid ko update karna 


#include<iostream>
using namespace std;

int  binarySearch(int *arr, int size, int key){
     // taking start , end  and mid
     int s=0, e=size-1;
      //find mid
       // int mid=(s+e)/2;  
       // is case me kuch jagah TLE dega bcoz integer range is "(2power31 )-1"   hota hia..
       // aur jab (int + int) ko add karenge to range se bahar chala jayega so it will give TLE  

     // efficient method 
     int mid= s + (e-s)/2;
     //using while loop
     while(s<=e)
     {
        //comparison
        if(arr[mid]==key){
            return mid;
        }
        
        if(key > arr[mid]) {
            s=mid+1;  // go to Right part 
        }
        else { // (key< arr[mid] 
            e= mid-1;  //go to Left part 
        }
        //update mid
       mid= s +(e-s)/2;
     }
     return -1;

}

int main(){
     int arr[]={12, 23,45, 67, 563, 675, 897,987,999};
     int size = sizeof(arr)/sizeof(arr[0]);
     int key;
    cout<<"Your Array is :"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter your key element : "<<endl;
    cin>>key;
    int res=binarySearch(arr,size,key);
    cout<<"Index of "<<key<<" is : "<<res<<endl;

    return 0;
}