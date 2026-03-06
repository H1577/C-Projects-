/*
For Loops 
For Loop With Arrays

For Loop Sytax
for(intal , condition , update)
*/

#include <iostream>
using namespace std;

int main(){

    int x = 5;                //We want To Print it 5 times
    cout << x << '\n';
    cout << x << '\n';
    cout << x << '\n';
    cout << x << '\n';
    cout << x << '\n';        // it is too long 

    for(int i= 0; i <5; i++){ //Simple ;)
        cout << x;             
    }
    cout << '\n';

    //================================

    char name[] = "Minecraft"; ////We want To Print every character

    cout << name[0] <<'\n';cout << name[1] <<'\n';
    cout << name[2] <<'\n';cout << name[3] <<'\n';
    cout << name[4] <<'\n';cout << name[5] <<'\n';
    cout << name[6] <<'\n';cout << name[7] <<'\n';
    cout << name[8] <<'\n';cout << name[9] <<'\n';

    for(int i = 0; i < 9 ; i++){ //In for Loop <<3
        cout << name[i] << '\n';
    }

    return 0;
}
/*
Date: 2026/3/6
By Me 
*/