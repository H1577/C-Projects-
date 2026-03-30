#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int strength,dragons;
    cin >> strength >> dragons;
    vector<pair<int,int>> why(dragons);

    for(int i =0;i<dragons;i++){
        cin >> why[i].first >> why[i].second;
    }

    sort(why.begin(),why.end());

    for(auto p: why){
        if(strength > p.first){
            strength+=p.second;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
/*
Date: 2026/3/30
By Me
*/