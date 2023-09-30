#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main (){
    list<int> my_list={12,34,10,90};
    for(int x:my_list){ //traversing the list
        cout<<x<<endl;
    }
    return 0;

}