// i/p : {3,8,10,17,1}
// index of pivot element is : 4

#include<iostream>
using namespace std;
int findPivot(int arr[], int n){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){ // To avoid extra comparison don't use s<=e
       // Agr humara element 0index wale element se bada hai to : 2 part  ki taraf jayenge  (Think in terms of Graph going up and down)
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            // otherwise 2 part me end (e) ko peeche ki taraf kheechte huye ghaseetate huye  layenge 
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

 int main(){
    int arr[]={3,8,10,17,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans =findPivot(arr,size);
    cout<<"Index of Pivot element is   : "<<ans<<endl;
    cout<<"Pivot element is : "<<arr[ans]<<endl;
    return 0;
}


/*
 int pivotIndex(vector<int>& nums) {
        const int sum =accumulate(nums.begin(),nums.end(),0); 
        int l=0;
        int r=sum;
        for(int i=0;i<nums.size();++i){
            r-=nums[i];   
            if(l==r)      
                return i;  
            l+=nums[i];    
        }
        return -1;  
    }

*/