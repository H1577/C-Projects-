#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;
    set<char> text;
    for(auto i : s)
        text.insert(tolower(i));

    if(text.size()==26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}