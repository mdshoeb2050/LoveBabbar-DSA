#include<iostream>
using namespace std;

int sumofelements(int a[],int size){
    if(size<=0)  // agar arr ka size min ho gaya to sum 0 return hoga
       return 0;
    return sumofelements(a,size-1)+a[size-1]; //Array size par call karke us array size ke last element ko ..
}                                           // Alag karke phir se array ko chhota/cut  karke us small size ke Subarray ko call karenge aur similarly karte jayenge.    
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<"Sum of Array Elements is : "<<sumofelements(arr,size)<<endl;
    return 0;   
}