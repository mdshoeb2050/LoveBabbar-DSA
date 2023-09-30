#include<iostream>
using namespace std;
int firstIndex(int a[],int size,int k,int currentIndex){
     if(currentIndex==size) return -1;  //base case 1
     if(a[currentIndex]==k) return currentIndex;  // base case 2

     return firstIndex(a,size,k,currentIndex+1);   // recursive call
}
int main(){
     int a[]={9,8,9,4,6,5,1,6,100};
     int size=sizeof(a)/sizeof(a[0]);
     int target=6;
     int result=firstIndex(a,size,target,0); // here we will pass currenIndex -->0

     if(result != -1) // -1 alawa koi other value to chalega 
      cout<<"Element "<< target <<" is present at index - "<<result<<endl;
     else // -1 ke case me
      cout<<"Element "<< target <<" is not present in the array."<<endl;
     return 0;
}