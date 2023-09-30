#include<iostream>
using namespace std;

void merge(int arr1[] ,int arr2[],int arr3[],int m, int n){
    int i=0,j=0,k=0;
    // condition
    while(i<=m && j<=n){
         if(arr1[i] < arr2[j]) {
            arr3[k++]=arr1[i++]; //arr1 ka element arr3 me jayega aur dono array ka index increment ho jayega - i++  , k++
         }
         else{
             arr3[k++]=arr2[j++]; //arr2  ka element arr3 me jayega aur dono array ka index increment ho jayega - j++  , k++
         }
    }
    //  Bache huye elements ( arr1 and arr2 ) ka kya hoga  
    while(i<m){ // traversing whole size of array
         arr3[k++]=arr1[i++];
    }
    while(j<n){ // traversing whole size of array
        arr3[k++]=arr2[j++];
    }
    
}


int main(){
   int arr1[]={11,22,33,55};
   int arr2[]={66,77,88,99,100};
   
   int m=sizeof(arr1)/sizeof(arr1[0]);
   int n=sizeof(arr2)/sizeof(arr2[0]);
   int arr3[m+n];
   //function calling
   merge(arr1,arr2,arr3,m,n);
   cout<<"final output after merging two sorted arrays :"<<endl;
   for(int i=0; i<m+n; i++){
       cout<<arr3[i]<<" ";
   }
   return 0;

}