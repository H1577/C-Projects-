#include <iostream>
using namespace std;

int main(){

    int theNumber = 5;
    int appt = 0;
    int number;
    cout << "Guess The Number Between 1 - 20\n";

    while(true){

        cin >> number;

        if(number == theNumber){cout << "Correct!\n"; break;}
        else{cout << "Wrong\n"; appt++;}

        if(appt == 3){cout << "Hint: The Number is Under 10 \n";}

        if(appt == 5){cout << "You Failed . The Number is " << theNumber; break;}
    }


    return 0;
}
/*
Date: 2026/3/6
By Me
*/