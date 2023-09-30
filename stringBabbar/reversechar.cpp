#include<iostream>
#include<string.h>
using namespace std;
void reverse(char arr[]){
    int n=strlen(arr);
    int s=0 , e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
  


int main(){
    string str;
    getline(cin,str);
    cout<<"My str is "<<str<<endl;   //mogambo kumar jain
                                     //My str is mogambo kumar jain
   // char name[10]="babbar";
   //  reverse(name);
   // cout<<"Reverse is -> "<< name <<endl;
}