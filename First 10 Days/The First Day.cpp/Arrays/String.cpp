/*
String is an array Of Characters 
-- C-style 
-- Class Array

Note: Always The String Has Null(\0) In Ending
*/

#include <iostream>
using namespace std;

int main(){

    cout << "Hello, World\n";         //const char[14] , \n = one character

    char string[] = "Welcome";
    cout << string << "\n";           //Welcome\0.  \0 will not show
    cout << sizeof(string) << '\n';   //7 + null(\n) = 8
    cout << "One\0 Piece"  << '\n';   //null is for closing The Text (One)


    //Proving that null exists. Null its Number in ASCII is 0
    cout << int(string[7]) << '\n';    //0   

    //Another Way To Write String
    char string1[] ={'W', 'e','l','c','o','m','e','\0'};
    cout << string1;

    //Class Array
    //string name_1 = "Hi";

    return 0;
}
/*
Date : 2026 /3/5
By Me
*/