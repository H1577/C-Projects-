#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int room = 0;

    for(int i=0;i<n; i++){
        int x,y;
        cin >> x >>y;

        if(y-x >= 2)
            room++;
    }

    cout << room;

    return 0;
}
/*
Date: 2026/3/15
By Me
*/