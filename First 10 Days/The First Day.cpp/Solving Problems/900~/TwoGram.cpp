#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    long long n;
    string s;
    cin >> n >> s;
    map<string,long long> text;

    for(int i =0; i < n-1;i++){
        string s1;
        s1 += s[i]; 
        s1 += s[i+1];
        text[s1]++;
    }
    int max = 1;
    string s2;
    for(auto p : text){
        if(p.second >= max){
            max = p.second;
            s2 = p.first;
        }
    }
    cout << s2;

    return 0;
}
/*
Date: 2026/3/27
By Me
*/