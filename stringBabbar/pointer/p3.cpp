#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};

   /*
    cout<<arr<<endl;      //0x61fefc
    cout<<*arr<<endl; //1
    cout<<&arr[0]<<endl; //0x61fefc
    cout<<&arr<<endl;    //0x61fefc   why --??????
    */

    //class work
   // cout<<*arr<<endl;      //1
    /*
    cout<<*(arr+0)<<endl;  //1 
    cout<<*(arr+1)<<endl;  //2
    cout<<*(arr+2)<<endl;  //3
    cout<<*(arr+3)<<endl;  //4
    cout<<*(arr+4)<<endl;  //5
    
    //  Formula -- *(arr+i)== arr[i]
    // *(arr+i)  -- > i ki value jaise hi increment hogi wah next Block / Cell ko point karta jayega 

    cout<<endl;
    //------------------------------------
    cout<<arr[0]<<endl;  //1
    cout<<arr[1]<<endl;  //2
    cout<<arr[2]<<endl;  //3
    cout<<arr[3]<<endl;  //4
    cout<<arr[4]<<endl;  //5
    
    */

   //  cout<<4[arr]<<endl;  //5

    // concept arr[i]==i[arr]



    /*
    //------------------------------
    cout<<(arr+0)<<endl; // 0x61fefc
    cout<<(arr+1)<<endl;  //0x61ff00
    cout<<(arr+2)<<endl;  //0x61ff04   //difference of 4 bytes
    cout<<(arr+3)<<endl;  //0x61ff08   //difference of 4 bytes
    cout<<(arr+4)<<endl;  //0x61ff0c
    
     cout<<(arr+5)<<endl; //0x61ff10
     cout<<(arr+6)<<endl; //0x61ff14    */  //difference of 4 bytes

    /*
    char ch[]="abcd";
    char *p=ch;
    cout<<*ch<<endl;  //a

    cout<<ch<<endl;   //abcd   {Address ki jagah par puri value hi print karna start kar dega jab tk '\0' na mil jaye}

    cout<<*p<<endl;   //a   // *ch == *p

    cout<<p<<endl;     //abcd   ----??????????   { same cheez yaha pr bhi address ki jagah value ...}
    */

  //  char name ='B';
    //char *ctr=&name;
   // cout<<"Output is ->"<<ctr<<endl;  //B☺    {same here bhi...address ki jagah value}
   
 //  char poo = 'ABCD';  //D☺
   char poo = 'D';
   char *kalua=&poo;
   //cout<<"Output is ->"<<kalua<<endl;  //D☺     {same here bhi}


// 'ABCD' ='D' ---> D☺  


//quick check your attention

/*
int *p1;
cout<<p1<<endl;  //0x75f9dcd0   {pointer is pointing random location}
cout<<*p1<<endl;  //-1957298293  { Pointing Random  Value}
cout<<&p1<<endl;  //0x61fef0    {pointer ka khud ka address}

cout<<endl;

int *p2=0;   //NULL pointer
cout<<"Output1-"<<p2<<endl;  //0 
//cout<<"Output2-"<<*p2<<endl;  // {Segmentation fault -} --> You are trying to read and write an illegal memory location.
cout<<"Output3-"<<&p2<<endl;   //0x61feec
*/

/*

if(cout<<"Shoeb"){
    cout<<"YES"<<endl;  //ShoebYES
}
else{
    cout<<"NO"<<endl;
}
*/
/*
char sentence[]="My name is Kalua Don";
char *p= sentence;
cout<<p<<endl;  //My name is Kalua Don      {Address ki jagah par puri value hi print karna start kar dega jab tk '\0' na mil jaye}
cout<<*p<<endl;  //M     // {*(p+0) - p[0] - M}
cout<<&p<<endl;  //0x61fedc
*/




   











    return 0;
}