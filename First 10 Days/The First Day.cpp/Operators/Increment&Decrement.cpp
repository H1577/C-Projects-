#include <iostream>
using namespace std;

int main()
{
  int shares = 0;
  cout << shares++ << "\n";  //0   Firstly will print The Variable Then Plus 1 (Updating)
  cout << shares << "\n";    //1

  int comments = 0;
  cout << ++comments << "\n";  //1   Firstly will plus 1 on The variable then print (Updating)
  cout << comments << "\n";    //1

  int x = 10;
  int y = x++;                   //Use it Then Plus 1 (Updating x)
  cout << y << "\n";
  cout << ++x << "\n";           //12  We already Plused 1 Then Plus 1 and print x

  int z = 10;
  int a = ++z;                   //plus one and use it (Updating x)
  cout << a << "\n";             //11
  cout << a++ << "\n";           //11  Print x then plus 1


  
  return 0;
}