#include <iostream>
using namespace std;

int main()
{
cout << "==============================\n";
cout << "======Calculate Your Age======\n";
cout << "==============================\n";

int age;
cin >> age;
//cin for input data

cout << "\nYour age is " << age;
cout << "\nYour age in Days is " << age * 365 <<" Days" ;
cout << "\nYour age in Hours is " << age * 365 * 24 <<" Hours" ;
cout << "\nYour age in Minutes is " << age * 365 * 24 * 60 <<" Minutes" ;
cout << "\nYour age in Seconds is " << age * 365 * 24 * 60 * 60 <<" Seconds" ; 
return 0;
}
//2026/1/15
