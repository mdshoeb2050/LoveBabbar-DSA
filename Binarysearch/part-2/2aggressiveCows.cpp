#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
// fun to find possible ans
    bool isPossible(vector<int>stalls, int k, int mid){
    // 1st cow ke liye 
    int cowCount=1;
    int lastPos=stalls[0];
    
    // using for loop we are checking possible ans so that cow dont hurt themselves
    for(int i=0; i<stalls.size(); i++){
         //mid se value greater or equal from mid hua.. it means  ye humara possible sol hoga is distance par cows dont hurt 
        if(stalls[i]-lastPos >= mid)
        {
           // condition true hote hi hum dusre cow ki taraf chalenge 
            cowCount++; 
            // check lagayneg  cowCount ke liye  .. jyada cow nahi hona chahiye k se jo 
            if(cowCount == k) 
                return true; // humari dono cows sahi distance par set ho gayi hai ab wo nahi ladengi
            //else 
            // jaha tak loop ko run kiya h array me us current value ko lastPos var me set kar denge
            lastPos=stalls[i];
            
        }
    }
    // pura loop chal gaya Array me aur dono cows ko max distance par set nahi kar paye ...it means our mid is not ok 
    return false ;

}

int aggressiveCows(vector<int> &stalls, int k)
{
    // sabse pahle array ko sort kar lenge 
   
    sort(stalls.begin(), stalls.end());
    
    int s=0;
    // maxi value of array will be our end 
    int maxi=-1;
    for(int i=0; i<stalls.size(); i++){
        maxi=max(maxi,stalls[i]);
    }
    // now assign max value to end 
    int e=maxi;
    //calculate mid
    int mid=s+(e-s)/2;
    // applying binary search logic
    int ans=-1;
    while(s<=e)
    {
      //find possible solution
        if(isPossible(stalls,k,mid)){
            ans=mid; //store that mid(index).. is index par cow ko rakhenge to dono cows aapas me nahi ladenge 
            //now go to Right part of Array .... Bcoz we want large possible ans
            s=mid+1;
        }
        else { // if mid is not our possible solution 
            e =mid-1;  // left part of array  
        }
        // updating mid
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> stalls;
    int k; // no of cows
    int n;
    cout<<"Enter no of array elements :"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>stalls[i];
    }
    cout<<"Enter no of cows :"<<endl;
    cin>>k;
    cout<<"Largest minimum distance between cows is : "<<aggressiveCows(stalls,k)<<endl;
    return 0;
}