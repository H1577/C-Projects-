#include <iostream>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t ;
    string s;
    cin >> s;


    for(int j =1; j <= t;j++){

        for(int i =0;i < n-1;i++){
        if(s[i] == 'B'&& s[i+1] == 'G'){
            s[i+1] = 'B';
            s[i] = 'G' ;
            i++;
        }
        }
    }
    
    cout << s;

    return 0;
}
/*
Date: 2026/3/13
*/