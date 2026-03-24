#include <iostream>
#include <set>
using namespace std;

int main(){

    string s;
    cin >> s;
    set<char> text;
    for(auto i: s)
        text.insert(i);

    if(text.size()%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}