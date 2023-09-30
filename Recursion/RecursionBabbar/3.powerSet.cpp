#include<iostream>
using namespace std;
void printPowerSet(string input, int index,string output){
         // Base Condition
		    if(index==input.length()){
		        cout<<output<<endl;
		        return ;
		    }
		    char ch=input[index];
		    //Exlcude ch (nahi lena hai)
		    printPowerSet(input,index+1,output);

		    // Include ch (lena hai)
		    output.push_back(ch); 
		    printPowerSet(input,index+1,output);
		}
int main(){
    string str, output;
    cout<<"Enter a string : "<<endl;
    cin>>str;
    printPowerSet(str,0,output);
    return 0;
}

/*
Enter a string : 
abc

c
b
bc
a
ac
ab
abc

*/