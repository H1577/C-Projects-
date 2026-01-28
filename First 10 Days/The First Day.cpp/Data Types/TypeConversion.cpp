/*
Sometimes The Compiler Will change The data type 
But You can Also Change it

In Calculate C++ will take The Biggest Data type
int + double => double
char + int => int
And The smallest Number will change into The Biggest Data Type
Before The Calculate.

In assign The First Variable will take The other Variable Value
While maintaining The Data type and The Data will change 
The Value depending on The Data type 
int x = 5.5
x will keep its Data Type and Takes 5.5
But it's intger So It will be x = 5 

*/
#include <iostream>
using namespace std; 

int main()
{
  double x =  50.5;
  int y = 10;
  x = y ;                     //x takes The value of y= 10 and While maintaining The Data type
  cout << sizeof(x) << "\n";  //8
  cout << x << "\n";          //10

  double x1 =  50.5;
  int y1 = 10;
  y1 = x1 ;                   //y1 takes The value of 50.5 and While maintaining The Data type
  cout << sizeof(y1) << "\n"; // 4
  cout << y1 << "\n";         // 50

 cout << "=====================================================" << "\n";

  char z = 't';
  int a = 6;
  cout << int(z) << "\n";
  cout << z + a << "\n";       //116 + 6 = 122 (int)
  cout << sizeof(z+a) << "\n"; //4

 cout << "=====================================================" << "\n";

  int b = 8.5;
  double c = 2.5;
  cout << b + c << "\n"; //10.5 Double 
  cout << sizeof(b+c) << "\n"; // 8

  cout << "=====================================================" << "\n";

  //  Here You are who Edit The Data type 

  int d = 8;
  double e = 2.5;
  cout << d + (int)e << "\n"; //10 int 

  int f = 8;
  double g = 2.5;
  cout << f + int(g) << "\n"; //10 int
  
  cout << "=====================================================" << "\n";

  cout << 5.0 << "\n";           //double
  cout << sizeof(5.0) << "\n";
  
  cout << 5 << "\n";           //intger
  cout << sizeof(5) << "\n";

  cout << 5U << "\n";          //unsigned intger 
  cout << sizeof(5U) << "\n";

  cout << 5.f << "\n";         //float           
  cout << sizeof(5.F) << "\n";

  cout << 5L << "\n";          //long
  cout << sizeof(5L) << "\n";

  cout << 5LL << "\n";         //long long  
  cout << sizeof(5LL) << "\n";

  cout << 5.L << "\n";         //long double        
  cout << sizeof(5.L) << "\n";

  cout << "=====================================================" << "\n";

  return 0;
}
/*
Date : 2026/1/28
*/