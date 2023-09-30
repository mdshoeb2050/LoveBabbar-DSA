#include <iostream>
#include <string.h>
using namespace std;

// -------------- Notes for the String Topic in quick way -------------
int main()
{
    // char arr1[10]="Gullupal";
    // char arr2[10]={'b','a','b','u','\0'};  //babu
    // cout<<arr1<<endl;
    // cout<<arr2<<endl;
    // cout<<arr2[3]<<endl;

    // Taking inputs from user
    //-----------User Input Strings--------------------

    //  char name[20];
    // cin>>name;     // input me "space"/"Tab"/"Enter"(New line) nahi lega - Treat as a Delimeter
    // cout<<name<<endl;  //shoebAnsari


    //-------------------------------------------------------------------//
    // string str;
    // cin>>str;    //shoeb ansari
    // cout<<str;     //op- shoeb
    // getline(cin,str);   //Mogambo khush Huaa (i/p)
    // cout<<str<<endl;    //Mogambo khush Huaa  (o/p)


    /*
        However, cin considers a space (whitespace, tabs, etc) as a terminating character,
        which means that it can only display a single word (even if you type many words).

        That's why, when working with strings, we often use the getline() function to read a line of text.
         It takes cin as the first parameter, and the string variable as second:
          eg-  shoeb   ansari  kumar (Accepting Tab)
   */

   // string firstName = "Shoeb ";
   // string lastName = "Ansari";
    //string fullName = firstName + lastName;           //Shoeb Ansari
    //string fullName = firstName.append(lastName);   //Shoeb Ansari
    //cout << fullName;

     /* 
         C++ uses the + operator for both addition and concatenation.
         Numbers are added. Strings are concatenated
     */ 

    /*     //----------------------------
    int a=20;
    int b=50;
    int c=a + b;
    cout<<"Addition is ->"<<c<<endl;   //Addition is ->70 
     */
    
    /*
    string a="20";
    string b="50";
    string c= a + b;
    cout<<"Cocatenation is ->"<<c<<endl;   //Cocatenation is ->2050
    */
     //----------------Find length of string ------------
     string txt="SalmankhanPagalHai";
     //cout<<txt.length()<<endl;    //18
     //cout<<txt.size()<<endl;       //18

     /*
     Tip: You might see some C++ programs that use the size() function to get the length of a string. 
     This is just an alias of length(). 
     It is completely up to you if you want to use length() or size():
     */

    //----------Accessing String------

    string myString = "Hello";
    //cout << myString[1];  // Outputs e 

    // ------------Modifying string value  using Index-------------

    string name ="KALUADON";
    name[2]='T';  //use single quotes
    //cout<<name<<endl;     //KATUADON


//------------Omitting Namespace  ------------
/*
You might see some C++ programs that runs without the standard namespace library. 
The using namespace std line can be omitted and replaced with the std keyword,
 followed by the :: operator for string (and cout) objects:
*/
  std::string greeting = "Hello";
  std::cout << greeting;  //Hello
  

}