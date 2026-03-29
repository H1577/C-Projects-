#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

    int t;
    cin >> t;
    cin.ignore();
    set<string> kinds;
    while(t--){
        string leave;
        getline(cin,leave);
        kinds.insert(leave);
    }
    cout << kinds.size();
    return 0;
}
/*
Date: 2026/3/27
By Me
*/