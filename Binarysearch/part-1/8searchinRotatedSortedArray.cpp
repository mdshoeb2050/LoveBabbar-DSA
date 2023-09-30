

#include<iostream>
using namespace std;
int findPivot(int arr[], int n){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){ // To avoid extra comparison don't use s<=e
       // Agr humara element 0index wale element se bada hai to : 2 part  ki taraf jayenge  (Think in terms of Graph going up and down)
        if(arr[mid]< arr[s]){
            s=mid+1;
            //s=mid;
        }
        else{
            // otherwise 2 part me end (e) ko peeche ki taraf kheechte huye  layenge 
            e=mid;
            // e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int  binarySearch(int arr[], int s, int e, int key){
     // taking start , end  and mid
     // efficient method 
     int mid= s + (e-s)/2;

     while(s<=e){
        if(arr[mid]==key) return mid;
        else if(key > arr[mid])  s=mid+1;  
        else  e= mid-1; 

       mid= s +(e-s)/2;
     }
     return -1;

}

 int main(){
    //int arr[]={3,8,10,17,1,3,5};
    //int arr[]={12,15,18,2,4}; // CN test case
    int arr[]={3,1}; // 1 search karne par o/p : 1 aana chahiye {leetcode test case}
    int size = sizeof(arr)/sizeof(arr[0]);
    int pivot =findPivot(arr,size);
    int pos;
    int target;
    cout<<"Enter target .."<<endl; 
    cin>>target;
    if(target >=arr[pivot] && target <=arr[size-1]){
        // searching in 2 line 
        pos = binarySearch(arr,pivot, size-1, target);
    }
    else{
        // searching in 1 line
           pos = binarySearch(arr,0, pivot, target);
    }
    cout<<"Position is : "<<pos<<endl;
    return 0;
}

// TC - logarithmic time O(log(n))


/*

class Solution {
public:
    int search(int A[], int n, int target) {
        int lo=0,hi=n-1;
        // find the index of the smallest value using binary search.
        // Loop will terminate since mid < hi, and lo or hi will shrink by at least 1.
        // Proof by contradiction that mid < hi: if mid==hi, then lo==hi and loop would have been terminated.
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A[mid]>A[hi]) lo=mid+1;
            else hi=mid;
        }
        // lo==hi is the index of the smallest value and also the number of places rotated.
        int rot=lo;
        lo=0;hi=n-1;
        // The usual binary search and accounting for rotation.
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;
            if(A[realmid]==target)return realmid;
            if(A[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};

// modified by me
class Solution {
public:
    int search(vector<int>&A,  int target) {
        int n=A.size();
        int lo=0,hi=n-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A[mid]>A[hi]) lo=mid+1;
            else hi=mid;
        }
        int rot=lo;
        lo=0;hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;
            if(A[realmid]==target)return realmid;
            if(A[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};
*/