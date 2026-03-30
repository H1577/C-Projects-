#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    int x =0;
    int y =0;
    cin >> s;
    for(int i =0;i<s.size(); i++){
        if(s[i] == '0'){
            x++;
            y = 0;
            if(x==7){
                cout << "YES";
                return 0;
            }
        }
        else{
            y++;
            x = 0;
            if(y==7){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
/*
Date: 2026/3/30
BY Me
*/