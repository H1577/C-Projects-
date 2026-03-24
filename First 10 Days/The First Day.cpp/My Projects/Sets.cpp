#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    set<char> text;
    for(char i: s)
        text.insert(i);
    
    cout << text.size() << '\n';

    for(auto i : text)
        cout << i;

    return 0;
}