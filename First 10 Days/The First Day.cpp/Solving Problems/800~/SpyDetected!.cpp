#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> count(101,0);
        vector<int> nums(n);
        for(int i =0;i<n;i++){
            cin >> nums[i];
            count[nums[i]]++;
        } 
        for(int i=0; i < n;i++){
            if(count[nums[i]] == 1){
                cout << i+1 << '\n';
            }
        } 
    }
    return 0;
}
/*
Date: 2026/3/21
*/