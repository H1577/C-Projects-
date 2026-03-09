#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string s;
int t;

int main(){

    cin >> t;

    while(t--){
        cin >> s; 
        for(int i =0; i < s.size();i++){
        s[i] = tolower(s[i]);
        }
        if(s == "yes"){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
/*
Date: 2026/3/9
*/