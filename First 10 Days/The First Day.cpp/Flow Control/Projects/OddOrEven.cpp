#include <iostream>
using namespace std;

int main(){
  
  int number1;
  cin >> number1;
  cout << (number1 % 2 == 0 ? "Even" : "Odd") << "\n";

  //=================================================

  int number;
  cin >> number;

  if(number%2 == 0)
    cout << "Even";
  else 
    cout << "Odd";

  return 0;
}