#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i =0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e'&& s[i] != 'u'&& s[i] != 'o' && s[i] != 'i'&& s[i] != 'y'){
          cout << '.' << s[i];
        }
    }

    return 0;
}
/*
Date: 2026/3/14
By Me
*/