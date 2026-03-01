#include <iostream>
using namespace std;

int main(){

    cout<< "1- Add student grade\n";
    cout<< "2- Show grade latter\n";
    cout<< "3- Exit\n\n";

    short command;
    cout << "Choose a Command: "; cin >> command;

    switch(command){

        case 1: cout << "Add student grade: ";
        short grade; cin >> grade;

        case 2: 
        switch(grade/10){ 
        case 10: cout << "grade latter is " << "A+"; break;
        case 9:  cout << "grade latter is " << 'A';  break;
        case 8:  cout << "grade latter is " << 'B';  break;
        case 7:  cout << "grade latter is " << 'C';  break;
        case 6:  cout << "grade latter is " << 'D';  break;

        default: cout << "grade latter is" << 'F';}

        case 3: ;
    }

}


    