#include<iostream>
using namespace std;
int mincoinexchange(int coins[], int arr_size, int amount, int currentCoinIndex){
       if(amount==0) return 1;  //base case 1
       if(amount<0) return 0;  // base case 2
       int ways=0;
       //now we will use every coin
       for(int i=currentCoinIndex; i<arr_size; i++){
           ways=ways+mincoinexchange(coins,arr_size,amount-coins[i],i);
       }
        // 
       return ways;
}
int main(){
  int coins[]={1,2}; //available coins
  int size=2;
  int amount =4; // amount to make
  int result=mincoinexchange(coins,size,amount,0);
  cout<<"Total no of ways to make total amount(4) is: "<<result<<endl;
  return 0;

}