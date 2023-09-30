#include<iostream>
#include"4templates.cpp"
using namespace std;

int main(){
    //creating objects of different datatype using templates
    Mypair<int> p1;
    Mypair<char> p2;
    Mypair<double> p3;
    Mypair<string> p4;
    Mypair<bool> p5;
    // setting integer value in p1 object
    p1.setX(5);
    p1.setY(10);
    cout<<"Value inside P1 object: "<<p1.getX()<<" "<<p1.getY()<<endl;

    // setting character value in p2 object
    p2.setX('a');
    p2.setY('e');
    cout<<"Value inside P2 object: "<<p2.getX()<<" "<<p2.getY()<<endl;

    // setting double  value in p3 object
    p3.setX(5.55);
    p3.setY(10.888);
    cout<<"Value inside P3 object: "<<p3.getX()<<" "<<p3.getY()<<endl;


    // setting string  value in p4 object
    p4.setX("shoeb");
    p4.setY("ansari");
    cout<<"Value inside P4 object: "<<p4.getX()<<" "<<p4.getY()<<endl;

    // setting bool  value in p4 object
    p5.setX(true);
    p5.setY(false);
    cout<<"Value inside P5 object: "<<p5.getX()<<" "<<p5.getY()<<endl;
    return 0;

}
/*
Value inside P1 object: 5 10
Value inside P2 object: a e
Value inside P3 object: 5.55 10.888
Value inside P4 object: shoeb ansari
Value inside P5 object: 1 0
*/