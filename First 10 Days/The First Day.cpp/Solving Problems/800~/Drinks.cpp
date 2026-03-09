#include <iostream>
using namespace std;

int main(){

    double sum = 0;
    int n;
    cin >> n;
    int drin[n];
    
    for(int i = 0; i<n ;i++){
        cin >> drin[i];
    }

    for(int i = 0; i<n; i++){
        sum += drin[i];
    }
    
    sum /= n;
    
    cout << sum;

    return 0;
}
/*
Date: 2026/3/9
By Me
*/