// linear search : traversing each element in an array to find a key element 

#include<iostream>
using namespace std;
// implemeting linear search
int linerSearch(int arr[], int size, int key){
     for(int i=0; i<size; i++){
        if(arr[i]== key)
         return i;
     }
    return -1;
}



int main(){
     int arr[]={32,4,10,456,02,45,112,1005};
     int size = sizeof(arr)/sizeof(arr[0]);
     int key;
    cout<<"Your Array is :"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter your key element : "<<endl;
    cin>>key;
    int res=linerSearch(arr,size,key);
    if(res!=-1)
         cout<<key <<" is found at index :"<<res<<endl;
    else 
        cout<<"Element Not Found."<<endl;
    return 0;
}