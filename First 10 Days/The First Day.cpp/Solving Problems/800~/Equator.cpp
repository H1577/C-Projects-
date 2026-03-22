#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> q(n);
    double sum=0;
    long long check=0;
    for(int i=0; i < n; i++){
        cin >> q[i];
        sum += q[i];
    }

    for(int i=0; i<n ;i++){
        check += q[i];
        if(check >= ceil(sum/2))/*check*2 >= sum*/{
            cout << i+1; 
            break;
        }  
    }
    return 0;
}
/*
Date: 2026/3/22
By Me
*/