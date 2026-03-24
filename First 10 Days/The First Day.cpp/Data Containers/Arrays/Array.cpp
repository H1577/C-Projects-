/*
Arrays Contain The same Data Type Of Values
We Need Arrays For Containing a lot of Values

--Sytax of array:
 DataType nameOfArray[NumberOfValues] = {};
int x[3] = {9,0,-10};
int x[] = {4,3,4};
int x[]{9,4,3,2};     (four Values)

--How to use it?
 The First element is always 0
so When We want it We Write x[0]
int x[] {9,7,4,2,4}
cout << x[0];       // 9

--How could we show The Location Of The Element?
 Just Write &x[0]
*/

#include <iostream>
using namespace std;

int main(){

    int x[2] = {8,4};
    cout << sizeof(x) << '\n';      //4*2 = 8
    double y[4] {8,6,5,5.7};
    cout << sizeof(y) << '\n' ;      //4*8 = 32 

    cout << x[0] << '\n';           //8
    cout << y[4] << '\n';           //Random Number

    cout << "The Location of The first elment " << &x[0];

    return 0;
}
/*
Date : 2026/3/2 
By Me
*/