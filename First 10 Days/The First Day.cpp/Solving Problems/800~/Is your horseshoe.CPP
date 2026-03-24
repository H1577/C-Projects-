#include <iostream>
#include <set>
using namespace std;

int main(){

    int nums[4];
    set<int> nums1;
    for(int i =0; i<4;i++){
        cin >> nums[i];
        nums1.insert(nums[i]);
    }

    cout << 4 - nums1.size();

    return 0;
}
/*
Date: 2026/3/25
By Me
*/