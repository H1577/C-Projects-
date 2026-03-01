/*
Syntax Of if 

if(The Condition)
{
  Do Something
}

  OR

if(The Condition){Do Something}

else if
If The Condition is wrong it will move 
to else if 
But If the condition at first is correct 
it will not move to else if

else
If any Condition is not correct
it will do the command that in else

Nested if
If We want Filter Something 
We use it For example
We want 18-Above only 
if(x>= 18){
if(x >= 30){
do something
}
}

*/


#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Guess The Number Between 1-10: ";
  cin >> number;

  if(number<=10 && number >= 1)
  {
    if(number==4){
    cout << "Correct!";
  }

   else if(number != 4){
    cout << "Wrong!";
  } 

  }
  else
   {
     cout << "Your Number is not between 1-10";
   }

  return 0;
}