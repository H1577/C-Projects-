#include <iostream>
using namespace std;

int main(){

    int steps =0;
    int n;
    cin >> n;
    char s[n];

    for(int i = 0;i<n; i++){
        cin >> s[i];
    }

        for(int i = 0; i<n;i++){
            if(s[i] == s[i+1]){
                steps++;
            }
        }

    cout << steps;

    return 0;
}
/*
Date: 2026/3/13
By Me
*/