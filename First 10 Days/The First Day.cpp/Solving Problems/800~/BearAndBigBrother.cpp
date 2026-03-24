#include <iostream>
using namespace std;

int main(){

    int a,b;
    int year = 0;
    cin >> a >> b;

    while(b >= a){
        a*=3;
        b*=2;
        year++;
    }
    cout << year;

    return 0;
}
/*
Date: 2026/3/23
By Me
*/