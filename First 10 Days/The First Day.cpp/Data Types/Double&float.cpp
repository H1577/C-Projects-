/*
You can change the data type for your using

ALWAYS any number like this 8.99 or 9.0 is double
expect when you change it.

To change int to float write 5.f not 5f
To change double to float write 5.5545f.

^NOTE^ It does not matter If you put F or f ((Here))

int x = 7.f or 7.0 or 7 always x will be integer.
and it depends on The Data type.
For example, Double y = (intger) + (float) it will be Double

^NOTE^ If you put any Number in any Data Type Numbers
 it will not show you an error : bool , int , float , double , long long.
 bool if it is not 0 will show 1. and every Data type will show his own.
*/

#include <iostream>
using namespace std;

int main()
{
  int x = 5.77;              // Here (int x = Double) But we wrote at First int so it will be int
  cout << sizeof(x) << endl; // Now it became int so the size is 
  cout << x << endl;         // It prints 5 because X is intger

  double y = 5;              // Here 5 is intger 
  y = 9.f;                   //its float But at First We put double so y=double even if we update  
  cout << sizeof(y) << endl;
  cout << y << endl;

  bool z = 0;
  z = -564565.f;            // it will be 1
  cout << sizeof(z) << endl;
  cout << z << endl;         // It will print 1

  return 0;
}
/*
Date : 2026/1/24
*/