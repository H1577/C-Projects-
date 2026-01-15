#include <iostream>

int main()
{
const long long speedOfLight = 299792458; //m/s
// The speed of light is a constant and never change
//You can not leave the constant variables without a value 
//Long Long for huge numbers 
int time = 10;
//The time is not a constant variable
long long distence = speedOfLight * time;

std::cout << "The Distence is " << distence << "m"; 
return 0;
}
//2026/1/15