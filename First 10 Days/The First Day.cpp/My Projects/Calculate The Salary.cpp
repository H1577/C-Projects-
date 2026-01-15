#include <iostream>

int main()
{
int salary; std::cout << "Enter The Salary\n ";
std::cin >> salary;

int Days_Of_Absence; std::cout << "Enter The Days Of Absence\n ";
std::cin >> Days_Of_Absence;

int theDiscount; std::cout << "Enter The Discount\n ";
std::cin >> theDiscount;

int SALARY = salary - (Days_Of_Absence*theDiscount);

std::cout << "The Final Salary is " << SALARY;

return 0;
}
//2026/1/15