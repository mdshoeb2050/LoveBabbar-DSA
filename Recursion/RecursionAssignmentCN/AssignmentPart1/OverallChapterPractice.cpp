#include<iostream>
using namespace std;
bool checkArray(int arr[], int size){
    if(size==0 ||size==1) 
       return true;
    if(arr[0]>arr[1])
       return false;
    bool smallOutput=checkArray(arr+1, size-1);
    return smallOutput;

}
bool checkArray2(int arr[],int size){
    if(size==0 ||size==1)  return true;
    bool smallOutput=checkArray2(arr+1, size-1);
    if(!smallOutput) return false;
    if(arr[0]>arr[1])
       return false;
    else 
       return true;

}
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
// program for fibonacci series
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    //if(n==0 || n==1) return n;
    return fibo(n-1)+fibo(n-2);
}
// calculate X raised to power N
int power(int base , int exponent){
    if(exponent==0) return 1;
    return base*power(base,exponent-1);
}

//print numbers recursively
void print(int n){ // here void means kuch bhi return nahi karna hai fun ke bahar
     //base case  0 hai ...1 se neeche fun call nahi hona chahiye
    if(n>=1){
      print(n-1);
      cout<<n<<" "<<endl;  //stack me jitne bhi calls huye hai previous value par condition false hone par printing ka kam start ho jayega
    }
}
// sum of Array elements

int sumArrayElements(int arr[],int size){
    if(size==0) return 0;
    // fun ko size 1 kam karke call karenge aur last wale element ko alag karte jayenge
    return sumArrayElements(arr, size-1)+arr[size-1];  
}

// count digits (iterative method)
int countDigit(long long int  n){
    int result=0;
    int count=0;
    while(n>=1){
        result+=n%10;
        n=n/10;
        count++;
    }
    return count;
}

 // -----> count digits (Recursive Approach)
 int countDigit(int  n){
     if(n==0) return 0;
     return 1+countDigit(n/10);
 }

// ---------> check Target Element in array
 int SearchElement( int arr[], int size, int target){
    size--;
    if(size<0) //Base case 1
      return -1; 
    if(arr[size]==target) //Base case 2
      return size; // returning index of target element
     return SearchElement(arr,size,target);
 }


int main(){
   //int n;
   //cout<<"Enter no. "<<endl;
   //cin>>n;
   //cout<<"Result is :"<<fact(n)<<endl;
   //cout<<n<<"th term is  :"<<fibo(n)<<endl;
  
   // check array is sorted or not (using recursion)
  // int arr[]={2,3,4,90,6,7,8};
   //int n=7;
  // cout<<"Ans is: "<<checkArray(arr, n)<<endl;
   //cout<<"Ans is: "<<checkArray2(arr, n)<<endl;

 // calculate X raised to power N
   int base=2;
   int expo=5;
    //cout<<"Ans is :"<<power(base,expo)<<endl;
//print numbers recursively
  // int num=10;
   //print(5);

// sum of Array elements
  //  int arr[]={1,2,3,4,5};
    //int size=5;
    //int size=arr[4]/arr[0];
   // cout<<"Size= "<<size<<endl;
    //cout<<"Result is: "<<sumArrayElements(arr,size)<<endl;
    
    // -----> count digits (iterative method)
    // long long int num=23445994537862;
    //cout<<"count of digits is : "<<countDigit(num)<<endl;
   
    // -----> count digits (Recursive Approach)
    int num=3456789;
   // cout<<"count of digits is : "<<countDigit(num)<<endl;
   
   // ---------> check Target Element in array
   int arr[]={9,8,9,4,6,5,1,6,100};
   /* Jab array me Duplicate Element hoga to  last wale duplicate element 
     ka index return hoga kyuki recursively iterate kar rahe hai Array ko last se
      Element 6 is present at index ->7
    */
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<"Size of array -->"<<size<<endl;
   int target=6;
   int result=SearchElement(arr,size,target);
   // yaha result variable ke andar target element ka index aa jayega mil jane par other wise -1  aa jayega Array me element nhi milne par
   if(result != -1) // -1 alawa koi other value to chalega 
     cout<<"Element "<< target <<" is present at index ->"<<result<<endl;
    else // -1 ke case me
     cout<<"Element "<< target <<" is not present in the array."<<endl;
    
    return 0;
}
/*
Enter no. 
10
Result is :3628800
*/
/*
Enter no. 
9
9th term is  :34  
*/ 

// check array is sorted or not (using recursion)


