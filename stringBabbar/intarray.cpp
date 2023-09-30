#include<iostream>
using namespace std;
int main(){
    int name[10],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
     for(int i=0;i<n;i++){
       cout<<name[i]<<endl;
     }
    return 0;
}