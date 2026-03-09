#include <iostream>
#include <string>
using namespace std;

int main(){

    int num = 0;
    string s;
    cin >> s;
    int size = s.size();

    for(int i=0; i < size; i++){
        for(int j=0; j < size; j++){
            if(s[i] != s[j]){
                num++;
            }
        }
    }

    if(num%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
/*
To be Continued
*/