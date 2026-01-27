/*
Char is 1 byte 
ASCII = American Standard Code for Information Interchange
a = 97, A=65, b=98, B=66, and so on...

'a' = a  
'a'+ x = 97 + x
int('a') = 97

And In variables It depends on The Data Type.
For Example :
bool x = 'a'. it will be 1.
float x = 'a'. it will be 97.
char x = 'a'. it will be a.
*/

#include <iostream>
using namespace std;

int main ()
{    

cout << 'a' << "\n";               // a without anything
cout << 'a' + 1 << "\n";           //98 In Counting (intger)
cout << int('a') << "\n";          // 97 (intger) 

cout << '%' << "\n";               // % without anything
cout << '%'*2 << "\n";             // 74 In counting (intger)
cout << int('%') << "\n" << "\n";  // 37 (intger)

//------------------------------------------------

char x = 'a' ;                      // x = a
//char y = a;   //error
//char z = "a"; //error 

cout << x << "\n";                 // a
cout << int(x) << "\n";            //97 intger only in this command because we didn't update it
cout << sizeof(x) << "\n" << "\n"; //1

//------------------------------------------------

int y = 'a';                       // y = 97

cout << y << "\n";                 // 97
cout << int(y) << "\n";            // 97
cout << sizeof(y) << "\n" << "\n"; //4

//-------------------------------------------------

bool z = 'a';;;;;;;;;;;;           // z = 1
cout << z << "\n";                 //1
cout << int(z) << "\n";            // 1
cout << sizeof(z) << "\n" << "\n"; //1

//-------------------------------------------------

float m = 'a';                     // y = 97

cout << m << "\n";                 // 97
cout << float(m) << "\n";          // 97
cout << sizeof(m) << "\n" << "\n"; //4


//-------------------------------------------------

//string a = 'a';                  //Error

//-------------------------------------------------

// THE OPPISITE 
char l = 97;                       //a = a
cout << l << "\n";
cout << char(97) << "\n";         //a (In Another Way)

return 0;
}
/*
Date : 2026/1/26
*/