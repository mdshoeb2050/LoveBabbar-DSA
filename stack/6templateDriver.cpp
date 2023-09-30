#include<iostream>
using namespace std;
#include "6templates.cpp"
//Triplet using pair 
int main(){
    Mypair< Mypair<int,char>, double> p2;
    p2.setY(55.0009);

    Mypair<int,char> p4;
    p4.setX(500);
    p4.setY('Z');

    p2.setX(p4);

    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
    return 0;
}

//   500 Z 55.0001