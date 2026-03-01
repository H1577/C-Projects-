#include <iostream> 
using namespace std;

int main()
{
  int e = - true;
  int d =-false;

  cout << e<< endl; //Not error (-1)
  cout <<d << endl; // Not error (0)

  float x = -0.0;
  double z = -0.0;
  int y = -0.0;
  bool a = -0.0;
  cout << x << endl;
  cout << z << endl;
  cout << y << endl;
  cout << a << endl;
  /*
  If you put -0 it will not be an error (0)
  But in float and double (only them) if you put -0.0 its (-0)
  */

  int c =18;
  int b =9;
  c= b;   // c will take the value of b
  cout << b << endl;
  cout << c << endl;
  // (9)

  b = c;            // b now it became 9 because we updated it in line 24
  cout << b << endl;
  cout << c << endl;// (9)

  int p = 5;
  int o = 2;
  double f = p / o; // 2
  cout << f << "\n";


  bool g = false;
  cout << 'a'+g << "\n";
  cout << sizeof('a'+g);
  return 0;
  ;
}