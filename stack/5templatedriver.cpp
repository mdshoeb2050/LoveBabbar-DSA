#include<iostream>
#include"5templates.cpp"
using namespace std;

int main(){
    //creating 2 datatype as a pair in objects 
    Mypair<int,char> p1;
    Mypair<int,double > p2;
    Mypair<int,float> p3;
    Mypair<char,double> p4;
    Mypair<char,float> p5;
    /*
    //aur bhi cheeze h jine hum explore kar sakte hai
       Mypair<int,int> p6;
       Mypair<char,char> p7;
       Mypair<double,double> p8;
       Mypair<float,float> p9;
       Mypair<string,string> p10;
       Mypair<bool,bool> p5;
    */
    // setting integer value in p1 object
    p1.setX(5);
    p1.setY('A');
    cout<<"Value inside P1 object: "<<p1.getX()<<" "<<p1.getY()<<endl;

    // setting character value in p2 object
    p2.setX(50);
    p2.setY(78.6666);
    cout<<"Value inside P2 object: "<<p2.getX()<<" "<<p2.getY()<<endl;

    // setting double  value in p3 object
    p3.setX(500);
    p3.setY(10.888);
    cout<<"Value inside P3 object: "<<p3.getX()<<" "<<p3.getY()<<endl;


    // setting string  value in p4 object
    p4.setX('B');
    p4.setY(77.7777);
    cout<<"Value inside P4 object: "<<p4.getX()<<" "<<p4.getY()<<endl;

    // setting bool  value in p4 object
    p5.setX('F');
    p5.setY(9.88877);
    cout<<"Value inside P5 object: "<<p5.getX()<<" "<<p5.getY()<<endl;
    return 0;

}
/*
Value inside P1 object: 5 A
Value inside P2 object: 50 78.6666
Value inside P3 object: 500 10.888
Value inside P4 object: B 77.7777
Value inside P5 object: F 9.88877
*/