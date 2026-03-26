#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    string s = "Luffy  Zoro Luffy Robin Sanji";
    map<string,int> names;
    string l;
    for(auto i : s){
        if(i == ' '){
            if(!(l.empty())){
            names[l]++;
            l.clear();
            }
        }
        else
            l += i;
    }
    names[l]++;

    cout << "Range Loop Method\n";
    for(auto i : names)
        cout << i.first << ':' << i.second << '\n';
    
    cout << "Iterators Method\n";
    for(auto it = names.begin(); it != names.end(); it++)
        cout << it->first << "->" << it->second << '\n';

    return 0;
}
/*
Date: 2026/3/26
By Me
*/