/*
Math Functions
(There are a lot Examples)
pow()
fmod()
ceil()
floor()
round()
trunc()
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << pow(6,2) << '\n'; //6^2 = 36

    //cout << 5.5 % 5 << '\n';  //Error
    cout << fmod(5.5,5) << '\n';//0.5

    cout << ceil(9.1) << '\n';//10
    cout << floor(9.9) << '\n'; //9
    cout << round(9.5)<< '\n'; //10
    cout << round(9.4)<< '\n'; //9

    cout << trunc(8.8757483433987); //8
    
    return 0; 
}
/*
Date:2026/3/14
By  Me
*/