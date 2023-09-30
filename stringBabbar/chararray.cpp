#include<iostream>
#include<string.h>
using namespace std;

int getlength(char arr[]){
    int length=0;
    int index=0;
    while(arr[index]!='\0'){
        length++;
        index++;
    }
  return length; 
}
int main(){
    char name[10]="babbar";
    //cin>>name;
    cout<<"Name is->"<<name<<endl;  //Name is->Shoeb 
    //cout<<"Length is->"<<getlength(name)<<endl;  //Length is->6
    cout<<"Length is->"<<strlen(name)<<endl; 
    return 0;
}