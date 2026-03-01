#include <iostream>
using namespace std;

int main()
{
  int x, y ,z;
	cout << "x= ";cin >> x;
	cout << "y= ";cin >> y;
	cout << "z= ";cin >> z;

	if(x > y && x > z)
	  cout << "x is The Biggest";
	else if (y > z)               // We dont write (y>x && y>z)because all of satutions it's useless
		cout << "y is The Biggest";
	else 
		cout << "z is The Biggest";

  return 0;
}