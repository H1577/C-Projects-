#include <iostream>
#include <cctype>
using namespace std;

int main(){

    string s,c;
    cin >> s >> c;
    int size = s.size();
    long long sum1 = 0;
    long long sum2 = 0;

    for(int i=0; i < size;i++){
        s[i] = tolower(s[i]);
        c[i] = tolower(c[i]);
    }

    if(s < c)
        cout << "-1";
    else if(c < s)
        cout << "1";
    else
        cout << "0";

    return 0;
}
/*
Date:2026/3/21
By Me
*/