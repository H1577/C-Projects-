#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> mes;
    set<string> mes1;

    while(n--){
        string s;
        cin >> s;
        mes.push_back(s);
    }
    for(int i =mes.size()-1; i >= 0; i--){
        if(!mes1.count(mes[i])){
            cout << mes[i] << '\n';
            mes1.insert(mes[i]);
        }
    }

    return 0;
}
/*
Date: 2026/3/27
By Me
*/