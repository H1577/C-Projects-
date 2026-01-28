/*
  + => Addition
  - => Subtraction
  * => Multiplication
  / => Division
  % => Modulo => Remainder After Division (ONLY INRGERS)
*/
#include <iostream>
using namespace std;

int main()
{
  cout << 1+1 << "\n";
  cout << sizeof(1+1) << "\n";         //4 intger

  cout << 5.+5. << "\n";
  cout << sizeof(5.+5.) << "\n";       //8 double

  cout << int(5.+5.) << "\n"; 
  cout << sizeof(int(5.+5.)) << "\n";  //4 intger

  cout << 100- -150 << "\n";     //250

  cout <<10*9 << "\n";           //90

  cout << 20/5 << "\n";     //4
  cout << 10.f/4 << "\n";   // 2.5 float

  cout << 21%5 << "\n";   //1
  cout << 20%5 << "\n";   //0
  cout << 24%5 << "\n";   //4
  //cout << 14.5%5 << "\n"  //Error
  

  return 0;
}