/*
Data Sizes
  Bit : The Smallest Storage in The Units 0 OR 1
  Byte : a group of 8 Bits (a single Character)
  Kilo byte = 1024 Byte
  Mega byte = 1024 Kilo byte
  Giga byte = 1024 Mega byte
  Tera byte = 1024 Giga byte

Data Types with Data Size
  int = 2 or 4 byte 
  float = 4 byte
  double = 8 byte
  long long = 8 byte 

  char = 1 byte , Like :("B","0","x")
  boolean = 1 byte , (true or false)
  
  You can know The size of The  Variables by sizeof(theVariable)
  ^Note^ : If you put a 100 Character in a data type The Size will not CHANGE
  Expect in string data type 

 The Story Behind Creating A Variable
  1-Declare A Variable
  2-Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  3-Restrict Type Of Data To The Type We Choosed 
  The Computer has Memmory Locations to put the place that we restrict Also we can found it
  By Adding & Before the Variable.

Declare Variable Without Type
  Add auto but You can not leave it without a value (like The Costant Variables)
*/

#include <iostream>
using namespace std;

string text = "Enter The number Of kilo byte ";

int main()
{
  //long long Data type is Better here Because Maybe We will Enter Big Numbers.
  // We used Auto in The others Variables because Maybe They will be huge numbers. 
  long long kilo; 
  cout << text; cin >> kilo;
  cout << "\nYour Number in kilo bytes is " << kilo;
  auto byte1 = kilo * 1024; 
  cout << "\nYour Number in bytes is " << byte1;
  auto bit = byte1 * 1024;
  cout << "\nYour Number in bits is " << bit;
  return 0;
}
/*
Date : 2026/1/23
*/


