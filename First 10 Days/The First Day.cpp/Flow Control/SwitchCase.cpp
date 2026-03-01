/*
switch for many cases and More Readable 
switch accepts intger and char Data Types

Syntax of switch 

switch(x){
case 1:
case 2:
cout << "If";
break;
}
*/

#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Choose a number From 1-7 ";
    cin >> day;

    switch(day){

        case 1: cout << "Sunday\n"; break;
        case 2: cout << "Monday\n";  break;
        case 3: cout << "Tuseday\n"; break;
        case 4: cout << "Wendsday\n"; break;
        case 5: cout << "Thursday\n"; break;
        case 6: cout << "Friday\n"; break;
        case 7: cout << "Saturday :( \n"; break;

        default: cout << "You Did not choose a Number between 1-7\n ";
    }

    cout << "\n==============================================\n";

    short num1,num2;
    char theCalclation;
    cout << "Choose Two Numbers\n "; cin >> num1; cin >> num2;
    cout << "Choose The Calclation\n "; cin >> theCalclation;

    switch(theCalclation){
    case '+': cout << num1 + num2 ; break;
    case '-': cout << num1 - num2 ; break;
    case '*': cout << num1 * num2; break; 
    case '/': cout << num1 / num2; break;

    default: cout << "You Did not Choose a Calculation."; }

    cout << "\n==============================================\n";

    int score;
    cout << "\nChoose Score From 0-100 "; cin >> score;
    switch(score/10){
        case 10: cout << "A+"; break;
        case 9:  cout << 'A';  break;
        case 8:  cout << 'B';  break;
        case 7:  cout << 'C';  break;
        case 6:  cout << 'D';  break;

        default: cout << 'F'; 
    }

    return 0;
}
/*
By Me 2026/3/1
*/