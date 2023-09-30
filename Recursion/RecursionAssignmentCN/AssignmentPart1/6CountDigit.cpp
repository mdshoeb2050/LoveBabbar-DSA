#include<iostream>
using namespace std;
int countDigit(int num, int k){
    //Base Case
    if(num==0) return 0;
    //Given number me se last digit ko extract karenge agar last digit humara Target element (k) hota hai,
    // To use count karenge recursive function ke sath
    // otherwise sirf recursive calling hogi small value par
     int lastdigit=num%10;
     if(lastdigit==k) 
       return 1+countDigit(num/10,k);
     else
       return countDigit(num/10,k);
}
int main(){
    int n,k;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"In which digit do you want to count the given number: "<<endl;
    cin>>k;
    cout<<"Total count of "<<k<< " in the given number "<<n<< " is: "<<countDigit(n,k)<<endl;
    return 0;
}

/*
Enter number :708000
In which digit do you want to count the given number:
0
Total count of 0 in the given number 708000 is: 4

Enter number : 
5122355
In which digit do you want to count the given number: 
5
Total count of 5 in the given number 5122355 is: 3
*/