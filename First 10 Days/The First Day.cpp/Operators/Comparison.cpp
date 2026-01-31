/*
  == Equal
  != Not Equal
  > Greater Than
  < Less Than
  >= Greater Than Or Equal
  <= Less Than Or Equal
  
You have to put Them in ()
*/

#include <iostream>
using namespace std;

int main()
{
  cout << (10==10) << "\n"; // True => 1 
  cout << (9==10) << "\n"; // false => 0

  cout << "===================================" << "\n";

  cout << (10!=10) << "\n"; // false => 0 
  cout << (9!=10) << "\n";  // true => 1

  cout << "===================================" << "\n";

  cout << (10>5) << "\n"; // true => 1 
  cout << (9>10) << "\n";  // false => 0

  cout << "===================================" << "\n";
  
  cout << (10<5) << "\n"; // false => 0 
  cout << (9<10) << "\n";  // true => 1

  cout << "===================================" << "\n";

  cout << (10<=5) << "\n"; // false => 0 
  cout << (9<=10) << "\n";  // true => 1

  cout << "===================================" << "\n";

  cout << (10>=5) << "\n"; // true => 1
  cout << (9>=10) << "\n";  // false => 0

   return 0;
}
/*
Date : 2026/1/31
*/