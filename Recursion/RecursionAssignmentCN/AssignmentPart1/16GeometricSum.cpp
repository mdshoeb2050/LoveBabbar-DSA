#include<bits/stdc++.h>
using namespace std;
/*
In the above-mentioned problem, we are asked to use recursion. 
We will calculate the last term and call recursion on the remaining n-1 terms each time. 
The final sum returned is the result.
*/
//program to calculating geometric sum
double geometricSum(int n){
    //Base Case
    if(n==0) return 1;
    //here we are calculating the sum each time
    double result =1/(double)pow(2,n)+geometricSum(n-1);
    // returning the result
    return result;
}

int main(){
    int num; 
    cout<<"Enter a num to produce sum of geometric sum :";
    cin>>num;
    cout<<"Geometric Sum is : "<<geometricSum(num)<<endl;
    return 0;
}