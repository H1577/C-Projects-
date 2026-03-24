/*
Updating and Adding Elements For Arrays 
How To count Elements in an array
*/

#include <iostream>
using namespace std;

int main(){

    int x[] {7,4,2,1,3,5,4,3,23,2,2,32,3,4,4,4,545,5,6,677777,776655};
    cout << sizeof(x)/sizeof(x[0]) << '\n';

    x[0] = 11;
    cout << x[0] << '\n';

    x[20] = 67;
    cout << x[20] << '\n';

    x[21]= 9;
    cout << x[21];

    return 0;
}
/*
Date 2026/3/3 
By Me
*/