#include<iostream>
using namespace std;
int sumAlldigits(int num){
    // Base case
    if(num==0) return 0;
    //Exrtracting last digits
    int last_digit=num%10;
    return sumAlldigits(num/10)+last_digit;

}
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<"Sum of all digits is : "<<sumAlldigits(n)<<endl;
    return 0;
}
/*
Enter a number : 
98765
Sum of all digits is : 35

Enter a number : 
056789
Sum of all digits is : 35

Enter a number : 
10000
Sum of all digits is : 1
*/