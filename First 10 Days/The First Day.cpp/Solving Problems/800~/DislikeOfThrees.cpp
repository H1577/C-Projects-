#include <iostream>
#include <vector>
using namespace std;

int main(){

    int i;
    int t;
    cin >> t;
    vector<int> lov;
    for(int i=1; lov.size()<1000; i++){
        if(i%3 !=0 && i%10 != 3)
            lov.push_back(i);
    }
    while(t--){
    cin >> i;
    cout << lov[i-1] << '\n';
    }
    return 0;
}
/*
Date: 2026/3/22
By Me
*/