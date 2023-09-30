#include<iostream>
using namespace std;

int AllIndexesRecursive(int arr[], int size, int k, int apnaArray[]){
    // Base Case 
    if(size<=0) return 0;
    //Recurrence Relation or Recursive call
    int smallAns=AllIndexesRecursive(arr,size-1,k,apnaArray);
    if(arr[size-1]==k) {            // conditon match kar raha hai to us element ka index array me store karte a jayenge ,,,Aur pointer Variable  (smallAns) ko aage increment karte jayenge
        apnaArray[smallAns++]=size-1; //backtracking ke time par 
    }
     return smallAns;
}

void getIndex(int arr[],int n, int x){
    int apnaArray[n];
    int size =AllIndexesRecursive(arr,n,x,apnaArray); // yaha wapas return hokar pointer var(smallAns ) ki value aayegi ---> 3
    //printing the indexes stored in apnaArray
    for(int i=0; i<size; i++){
        cout<<apnaArray[i]<<" ";
    }
}


int main(){
    int arr[]={9,8,10,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    cout<<"All indexes of target element in array are : "<<endl;
    getIndex(arr,n,x);
    return 0;
}