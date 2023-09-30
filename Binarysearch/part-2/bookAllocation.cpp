//#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// class Solution 
// {
//     public:

    //Functioin to check for possible solution in a Range
    bool psblSoln(int A[], int N, int M, int mid ){
        
       //allocating no of pages to students
       int studentCount=1;
       int pageSum=0;
       
       //Agar 1 students ko limit(mid) se jyada page nahi allocate hona chahiye
       for(int i=0; i<N; i++)
       {
           
           //checking no of pages should be less than or Equal to limit(mid)
           if(pageSum+A[i] <=mid)
           {
                   // is case me 1st student ka pageSum bad jayega
                   pageSum+=A[i];
           }
           else 
           {
                 // Agar no of pages jyada hoga limit(mid) se
                 // is case me 2nd student ko page allot hoga Bcoz...// no of pages bolenge to jyada understable hoga rather than no of Books se
                 // Each book will be allocated to exactly one student. Each student has to be allocated at least one book.
                 
                 //2nd student ke liye
                 studentCount++;
                 
                 // kis case me allot "NAHI" hona chahiye ye bhi to sochna h
                 if(studentCount > M || A[i] > mid)
                 {
                     return false;
                 }
                 // ab allot karenge 2nd student ko
                 //pageSum=0;
                 pageSum=A[i];
           }
       }
       // agar sabkuchh sahi sahi hai to phir "mid"  humara possible solution hoga
       return true;
    }
    
    
    
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int s=0;
        //calculating end. ....// end will be sum of array elements (sum of all pages)
        int sum=0;
        for(int i=0; i<N; i++){
            sum+=A[i];
        }
        int e=sum;
        
        // calculating mid
        int mid=s+(e-s)/2;
        
        //creating ans var to store possible solution
        int ans=-1;
        
        // agar students jyada aur books kam honge to nahi ho payega -1 return kar denge 
        // gfg test case 11 yahi par fase the 
        if(M>N ) return ans;

        while(s<=e){
            if(psblSoln(A,N,M,mid))
            {
               ans=mid;
               //going to left(1 part) part ....// Bcoz we r finding min 
               e=mid-1;
            }
            else
            {
                // going to Right(2 part) part .....// Sayad idhar possible ans mil jaye
                s=mid+1;
            }
            //updating mid
            mid=s+(e-s)/2;
        }
        return ans;
    }
    
//};


//  Driver Code Starts.

int main() {
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int A[n];
    //     for(int i=0;i<n;i++){
    //         cin>>A[i];
    //     }
    //     int m;
    //     cin>>m;
    //     Solution ob;
    //     cout << ob.findPages(A, n, m) << endl;
    // }
   // int arr[]={10,20,30,40};
    int arr[]={12,34,67,90};
    int size= sizeof(arr)/sizeof(arr[0]);
    int students;
    cout<<"enter no of students : "<<endl;
    cin>>students;
    cout<<"Minimum no of pages : "<<findPages(arr,size,students)<<endl;
    return 0;
}

