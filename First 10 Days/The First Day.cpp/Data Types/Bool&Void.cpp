/*
bool = boolean
bool :  1 = true Or 0 = false
Any Value exept 0 is True
Using <> in boolean

Void does not return a value
*/

#include <iostream>
using namespace std;

void void_H()
{
  // No Returning Value 
}

int main()
{
  bool x = -true;               // -true in declearing Variables = 1 
  bool y = false;
  //bool x = "F"alse;           //Error
  cout << x << "\n";            //1 
  cout << y << "\n";            //0
  
  bool z = false;                            //0
  cout << z + 10 << "\n";                    //10
  cout << -true + true + false << "\n";      //0
  
  int a = 10 > 5;             //Yes = true = 1
  bool b = 10 < 10;            //No = false = 0
  cout << a << "\n";           //1
  cout << b << "\n";           //0

  bool c = "One Piece";         
  cout << c;                    //1

  return 0;
}
/*
Date : 2026/1/26
*/