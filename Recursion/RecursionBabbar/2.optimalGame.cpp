#include<iostream>
using namespace std;
int optimalStrategy(int arr[], int i, int j){
    //Base Case
    if(i>j) return 0;
    int choice1=arr[i]+min(optimalStrategy(arr,i+2,j),optimalStrategy(arr,i+1,j-1));

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}
int main(){
    int arr[]={20,30,2,2,2,10};  //Ans is: 42
   // int arr[]={8,15,3,7};        // Ans is: 22
    int i=0; //starting index
    int j=5; // last index
    cout<<"Ans is: "<<optimalStrategy(arr,i,j)<<endl;
    return 0;
}

/*
int optimalStrategy(int arr[], 0, 5){
    //Base Case
    if(0>5) return 0;
    int choice1=arr[0]+min(optimalStrategy(arr,0+2,5),optimalStrategy(arr,0+1,5-1));

    int choice2=arr[5]+min(optimalStrategy(arr,0+1,5-1),optimalStrategy(arr,0,5-2));

    int ans=max(choice1, choice2);

    return ans;
}
//yaha i=2 & j=5 par next calling hoga

int optimalStrategy(int arr[],  2,  5 ){
    //Base Case
    if(2>5) return 0;
    int choice1=arr[2]+min(optimalStrategy(arr,2+2,5),optimalStrategy(arr,0+1,5-1));

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}
//yaha i=2 & j=5 par next calling hoga

int optimalStrategy(int arr[], 4, 5){
    //Base Case
    if(4>5) return 0;
    int choice1=arr[4]+min(optimalStrategy(arr,4+2,5),optimalStrategy(arr,i+1,j-1));

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}

//yaha i=6 & j=5 par next calling hoga

int optimalStrategy(int arr[], 6, 5){
    //Base Case
    if(6>5) return 0;   // yaha condition true hua to return 0

    int choice1=arr[i]+min(optimalStrategy(arr,i+2,j),optimalStrategy(arr,i+1,j-1));

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}

//---------------> choice1 ke 2 part ki calling -------------

//yaha i=1 & j=4 par next calling hoga

int optimalStrategy(int arr[], 1 , 4){
    //Base Case
    if(1>4) return 0;
    int choice1=arr[1]+min(optimalStrategy(arr,i+2,j),  optimalStrategy(arr,1+1,4-1)  );

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}

//yaha i=2 & j=3 par next calling hoga

int optimalStrategy(int arr[], 2 , 3){
    //Base Case
    if(2>3) return 0;
    int choice1=arr[2]+min(optimalStrategy(arr,i+2,j),  optimalStrategy(arr,2+1,3-1)  );

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}

//yaha i=3 & j=  2 par next calling hoga

int optimalStrategy(int arr[], 3 , 2){
    //Base Case
    if(3>2) return 0;    <----  // yaha condition true hua to return 0


    int choice1=arr[i]+min(optimalStrategy(arr,i+2,j),  optimalStrategy(arr,i+1,j-1)  );

    int choice2=arr[j]+min(optimalStrategy(arr,i+1,j-1),optimalStrategy(arr,i,j-2));

    int ans=max(choice1, choice2);
    return ans;
}


































*/