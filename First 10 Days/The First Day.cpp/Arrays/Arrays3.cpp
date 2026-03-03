/*
Two Dimensional Array
*/

#include <iostream>
using namespace std;

int main(){

    const int rows = 3;
    const int colms = 3;

    // When We want to Add a Variable As Array 
    // It has to Be constant

    //Good Practice
    int A[rows][colms] ={{1,2,3},{4,5,6},{7,8,9}};

    cout << A[0][1] << "\n"; //2
    cout << A[2][2] << "\n"; //9

    //Bad Practice because It is confusing But It is OK For The Compiler
    int B[rows][colms] ={1,2,3,4,5,6,7,8,9};

    cout << A[0][1] << "\n"; //2
    cout << A[2][2] << "\n"; //9

    return 0;
}
/*
Date : 2026/3/3
By Me 
*/