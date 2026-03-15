#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string meg[n];
    int sets = 0;

    for(int i =0; i<n;i++){
        cin >> meg[i];
    }

    for(int i =0; i < n; i++)
        if(meg[i]!=meg[i+1]){sets++;}
    
    
    cout << sets;

    return 0;
}
/*
Date: 2026/3/15
By Me
*/