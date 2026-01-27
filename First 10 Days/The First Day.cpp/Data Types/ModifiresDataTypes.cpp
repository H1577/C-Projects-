/*
*/
#include <iostream>
using namespace std;

int main()
{
  short int x = 500;
  cout << sizeof(x) << "\n"; //2 bytes

  short y = 500;             // same as short int
  cout << sizeof(y) << "\n"; //2 bytes

  //=================================================
  
  cout << sizeof(int) << "\n";             //4*

  cout << sizeof(short) << "\n";           //2* 
  cout << sizeof(short int) << "\n";       //2
  cout << sizeof(long) << "\n";            //4*
  cout << sizeof(long int) << "\n";        //4
  cout << sizeof(long long) << "\n";       //8* 
  cout << sizeof(long long int) << "\n";   //8

  //===================================================

  signed int z = -10;     //Positive and nigative and 0 (int)
  cout << z << "\n";

  unsigned int a = -10;   //Positive Numbers and 0 only 
  cout << a << "\n";      //Problem 

  //===================================================

  long long int myNumber = 1001001001010100;
  cout << myNumber << "\n";
  

  using LLI = long long int;
  LLI my1Number = 1001001001010100;
  cout << my1Number << "\n";
 

  typedef long long int Bigboy;
  Bigboy _myNumber = 1001001001010100;
  cout << _myNumber << "\n";

  //======================================================

  return 0;
}