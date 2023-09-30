   // i/p : [0,1,1,1,1,1,1,2,2,2,3,4,5] .  { Array will be sorted }

// last occurence of 1 is : index 5

#include<iostream>
using namespace std;

int lastOccurence(int arr[], int n, int key){
    int s=0, e=n-1;
    //calculating mid
    int mid=s+(e-s)/2;
    int ans = -1; // initialize ans var to store index of key in array
    while(s<=e){
        if(arr[mid]==key){
            //storing index in ans variable 
            ans=mid;
            //go to Right part of Sorted array Bcoz we are finding last  occurence
            // s ko utha kar Right me kar do
            s = mid+1; 
        }
        else if(key> arr[mid]){ // Right me Jao
            s= mid+1;
        }
        else if(key < arr[mid]) { // Left me jao
            e =mid-1;
        }
        // updating mid
        int mid=s+(e-s)/2;
    }
    // returning ans 
    return ans; // mil gaya to thik nahi to -1 to return to hoga in case nahi mila to 

}





int main(){
    //int arr[]={0,1,1,1,1,1,1,2,2,2,3,4,5};
    int arr[]={0,1,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=1;
    cout<<" Hello ji kaise ho...."<<endl;
    cout<<"Last Occurrence of "<<key<< " is: "<<lastOccurence(arr,size,key)<<endl;
    return 0;
}
