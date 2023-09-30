#include<iostream>
using namespace std;
void midelement(int arr[],int size){
     cout<<"Mid Element is: "<<endl;
     cout<<arr[size/2]<<endl;
}

int main(){
    int a[100],n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    cout<<"Enter element :"<<endl;
      for(int i=0;i<n;i++){
         cin>>a[i];
    }
    midelement(a,n);
    return 0;
}