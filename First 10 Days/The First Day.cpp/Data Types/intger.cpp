/*
intger 
  store from 2147483647 to -2147483648
  How did we know? Because We used INT_MAX and INT_MIN

  We can use true or false in intger and equals 1 or 0

  FYI : We can use sizeof(dataType) instead of sizeof(variable)

*/

#include <iostream>
using namespace std; 

int main()
{
  cout <<"The maximum of intger is "<< INT_MAX << endl; // endl is same as \n
  cout <<"The minimum of intger is "<< INT_MIN << endl << endl;

  cout << "The size of int is " << sizeof(int) << endl;
  cout << "The size of float is " << sizeof(float) << endl;
  cout << "The size of double is " << sizeof(double) << endl;
  cout << "The size of long long is " << sizeof(long long) << endl;
  cout << "The size of char is " << sizeof(char) << endl;
  cout << "The size of bool is " << sizeof(bool) << endl << endl;

  int x = 9 ;
  int y = -4 ;
  int z = true; //We can use true or false in intger because it equals = 1
  int a = false;

  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
  cout << a << endl;

  return 0;
}
/*
Date : 2026/1/ 24
*/