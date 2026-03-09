#include <iostream>
using namespace std;

int main(){

    int n;
    int k;
    
    cin >> n >> k;
    int scores[n];

    for(int i = 0; i < n; i++){cin >> scores[i];}

    int sum = 0;
    int target = scores[k-1];

    for(int j =0; j < n; j++){
    if(scores[j]>= target && scores[j] > 0){sum++;}}

    cout << sum;

    return 0;
}
/*
Date: 2026/3/6
By Me
*/