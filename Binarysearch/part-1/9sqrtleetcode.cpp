#include<iostream>
using namespace std;

class Solution {
public:
    int binarySearch(int n){
       int s=0, e=n;
       long long int mid = s+(e-s)/2;   // long long int : to Avoid integer overflow
       long long int ans=-1;
       long long int square;
        while(s<=e){
            //calculating square 
            square=mid*mid;
            
            //agr humara squre hi no hai to
            if(square==n) return mid;
            
            if(square<n){
                ans=mid;  // useful answer hai isko store kar lete hai 
                s=mid+1;  // go to Right part
            }
            else {
                e=mid-1; 
            }
            mid = s+(e-s)/2;
        }
        return ans;
    
    }
    
    int mySqrt(int x) {
        return binarySearch(x);
    }
    
};

int main(){
    Solution obj1;
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    int res=obj1.mySqrt(num);
    cout<<"Sqrt of "<<num<<" is : "<<res<<endl;
    return 0;
}