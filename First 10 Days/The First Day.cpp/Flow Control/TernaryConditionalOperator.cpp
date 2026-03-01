/*
(The Condition ? True : False {The same type})

We assign it depending on the data type
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 35;
  //cout << (age >= 18 ? 7 : "k"); //Error

  int x = (age >= 18 ? 1 : 0);
  cout  << x << "\n";

  int P = 500;
  cout << (P >= 750 ? "OK" : (age >= 18 ? "OK AGE" : "NOT OK AGE") );

  return 0;
}