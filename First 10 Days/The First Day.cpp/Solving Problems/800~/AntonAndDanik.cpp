#include <iostream>
using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;
    int A = 0;
    int D = 0;
    
    for(int i =0; i < n; i++ ){
        if(s[i] == 'D')
            D++;
        else
            A++;   
    }

    if(D>A)
        cout << "Danik";
    else if(A>D)
        cout << "Anton";
    else
        cout << "Friendship";

    return 0;
}
/*
Date: 2026/3/15
By Me
*/