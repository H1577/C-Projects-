#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    bool res[n];

    for(int i=1;i <= n;i++){

        cin >> res[i];

        if(res[i] == true){
            cout << "HARD";
            break;
        }
        else if(i == n)
            cout << "EASY";
    }

    return 0;
}
/*
Date: 2026/3/15
By Me
*/