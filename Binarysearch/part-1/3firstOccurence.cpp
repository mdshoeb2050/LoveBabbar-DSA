// i/p : [0,1,1,1,1,1,1,2,2,2,3,4,5] .  { Array will be sorted }
// first occurence of 1 is : index 1


#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int s=0, e=n-1;
    //calculating mid
    int mid=s+(e-s)/2;
    int ans = -1; // initialize ans var to store index of key in array
    while(s<=e){
        if(arr[mid]==key){
            //storing index in ans variable  (useful index)
            ans=mid;
            //go to left part of Sorted array Bcoz we are finding first occurence
            // e ko utha kar left me kar do
            e =mid-1; 
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
    int arr[]={0,1,1,1,1,1,1,2,2,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=1;
    cout<<" Hello ji kaise ho...."<<endl;
    int index=firstOccurence(arr,size,key);
    cout<<"First Occurrence of "<<key<< " is: "<<index<<endl;
   
    return 0;
}

