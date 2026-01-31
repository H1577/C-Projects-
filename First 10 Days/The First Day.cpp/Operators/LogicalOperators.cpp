/*
&& And 
|| Or
! Not
Two Satements or more between && or ||

For Example (7==8 || 9 >= 9) --> True

To Make The Oppsite Put ! Out The !()
!(7==8 || 9 == 9) --> false
*/

#include <iostream>
using namespace std;

int main ()
{
  int age = 20;
  int monney = 5;
  cout << (age>=18 && monney >=5) << "\n"; //true => 1


  int age1 = 20;
  int monney1 = 1;
  cout << (age1>=18 && monney1>=5) << "\n"; //false => 0


  int age2 = 20;
  int monney2 = 1;
  cout << (age2>=18 || monney2>=5) << "\n"; //true => 1


  int age3 = 11;
  int monney3 = 4;
  cout << (age3>=18 || monney3>=5) << "\n"; //false => 0


  int age4 = 11;
  int monney4 = 4;
  cout << !(age4>=18 && monney4>=5) << "\n"; //true => 1


  int age5 = 30;
  int monney5 = 15;
  cout << !(age5>=18 || monney5>=5) << "\n"; //false => 0

  return 0;
}
/*
Date : 2026/1/31
*/