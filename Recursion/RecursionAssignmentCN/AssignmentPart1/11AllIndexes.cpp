#include<iostream>
using namespace std;
int AllIndexesRecursive(int arr[],int size,int k, int output[]){
    if(size==0) return 0;

    int smallAns=AllIndexesRecursive(arr,size-1,k,output);

    if(arr[size-1]==k)
       output[smallAns++]=size-1;
    /* Array (arr) last element ke index ko outputArray me     
    insert karenge aur increment kar denge smallAns var ki help se
    */
}


void getIndexes(int arr[],int n,int x){
    int output[n]; // creating n size empty array
    int size=AllIndexesRecursive(arr,n,x,output);

    for(int i=0; i<size; i++){
        cout<<output[i]<<" ";
    }
}

int main(){
     int arr[]={9,8,9,4,6,5,1,6,100};
     int n=sizeof(arr)/sizeof(arr[0]);
     int x=6;
     getIndexes(arr,n,x); 
     return 0;
}