#include<iostream>
using namespace std;
void print ( int i,int n){
    //base case 
    if(i>n) return;
     cout<<"Shoeb Ansari"<<endl;
    //recursive call
    print(i+1,n);
   
}



void print2(int n){
    if(n>=1){  // here base case is n==0 , n==0 par condition false ho jayega
      print2(n-1);
      cout<<"Shoeb Ansari"<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    print2(n);
    return 0;
}