#include <iostream>
using namespace std;
using LL = long long;

int main(){

    LL n;
    LL k;
    cin >> n >> k;

    LL odds = (n+1)/2;

    if(k<=odds)
        cout << k*2-1;
    else{
        k -= odds;
        cout << k*2;
    }

    return 0;
}
/*
Date: 2026/3/23
*/