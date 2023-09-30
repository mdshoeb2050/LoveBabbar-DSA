// i/p : [0,1,1,1,1,2,2,3,4] .  { Array will be sorted }

// Total  occurence of 1 is : 4

#include<iostream>
using namespace std;


int firstOcc(int arr[], int n , int key){
   int s=0, e=n-1;
   int mid=s+(e-s)/2;
   //concept of ans var
   int ans=-1;
   while(s<=e){
        if(key==arr[mid]){
           //storing index 
           ans=mid;
           //go to left part of array
           e=mid-1;
        }
        else if(key > arr[mid]){
             // go to Right part 
             s=mid+1;
        }
        else // key <arr[mid]
            e=mid-1;
        
        mid=s+(e-s)/2;
   }
   return ans;
}

int lastOcc(int arr[], int n , int key){
   int s=0, e=n-1;
   int mid=s+(e-s)/2;
   //concept of ans var
   int ans=-1;
   while(s<=e){
        if(key==arr[mid]){
           //storing index 
           ans=mid;
           //go to Right  part of array Bcoz we need Last occurence
           s=mid+1;
        }
        else if(key > arr[mid]){
             // go to Right part 
             s=mid+1;
        }
        else // key <arr[mid]
            e=mid-1;
        
        mid=s+(e-s)/2;
   }
   return ans;
}


int main(){
   int arr[]={0,1,1,1,1,2,2,3,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   int key;
   cout<<"Enter key ..."<<endl;
   cin>>key;
   int total =  (lastOcc(arr,size,key) - firstOcc(arr,size,key)) +1; // +1 bcoz of   0 based indexing
   cout<<"Total no of occurence of "<<key<<" is : "<<total<<endl;
   return 0;
}

/*
Enter key ...
1
Total no of occurence of 1 is : 4
*/