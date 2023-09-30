#include<iostream>
using namespace std;
int power(int base,int expo){
    //Recursive fun
    if(expo!=0)
        return base*power(base,expo-1);  // yaha yadi  base== 2,3 ya n hai to ... wo to constant hi  rahega
    else 
       return 1; // in case of expo =0   :  kisi ka power zero  -> 1 hota hai
}
int main(){
    int base,exponent;
    cout<<"Enter value :"<<endl;
    cin>>base>>exponent;
    cout<<"Result is :"<<power(base,exponent);
    return 0;
}
/*
Enter value :
3
4
Result is :81
*/