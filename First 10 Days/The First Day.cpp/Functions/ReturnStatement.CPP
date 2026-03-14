#include <iostream>
using namespace std;

void H(int x, int y){

    cout << x + y << '\n';

    return;           //Stop Here
    cout << "GG";     //Will Not Show 

    //return 9;         Error because Your Function is void
}

//==============================================================

int calc(){
//You can Put Parameters or Not Same as Void

//You Have To Return a Value (int)
//And You can do Whatever you want with it

    cout << "Done!\n";
    return 'a'; //ASCII Value  and Stop Here Also
}

int main(){

    H(4,5);
    calc();              //Nothing Exept if There was an Action

    int result = calc(); //Here You can Storage The return Value and Print "Done!"
    cout << result+44;

    cout << calc();      //To Print The Return Value

    return 0;
}
/*
Date:2026/3/14
By Me
*/