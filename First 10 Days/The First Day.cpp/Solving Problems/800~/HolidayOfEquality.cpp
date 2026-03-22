#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    int max =0;
    int steps =0;
    vector<int> nums(n);
    for(int i=0; i<n;i++){
        cin >> nums[i];
        if(nums[i]>max)
            max = nums[i];      
    }
    for(int i =0; i <n ;i++)
        steps+=max-nums[i];

    cout << steps;

    return 0;
}
/*
Date:2026/3/22
By Me
*/