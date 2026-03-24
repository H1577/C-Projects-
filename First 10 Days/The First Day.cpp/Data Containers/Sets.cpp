/*
Sets
--All Elements are unique
--All Elements are sorted

Sorting
--Depends on The ASCII Values

Built in Functions
x.size()
x.insert(i)
x.erase(i)
x.count(i) 1 or 0
*/
#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> nums = {4,2,3,1,5,5,5,5,5,5};
    //cout << nums[0];      Problem
    //cout << nums.at(0);   Problem

    for(int i: nums)
        cout << i << ' ';    //12345 Because It is Sorted and unique
    
    set<string> texts = {"abc","D9F","672","&*0"};
    for(auto i : texts)       //Compareing with The First Letter
        cout << i << ' ';     //&*0 672 D9F abc 
    
    cout << "\n===================================\n";
    
    //Built in Functions

    set<int> nums2 = {200,100,500,500};
    for(auto i: nums2)
        cout << i << ' ';    //100 200 500
    
    cout << '\n';    
    cout << nums2.size() << '\n';    //3
    //===============================================

    nums2.insert(1);
    for(auto i:nums2)
        cout << i << ' ';

    cout << '\n';
    cout << nums2.size() << '\n'; //4
    //===============================================

    nums2.erase(500);
    for(auto i : nums2)
        cout << i << ' ';

    cout << '\n';
    cout << nums2.size() << '\n'; //3
    //================================================
    cout << nums2.count(200) << '\n'; //1
    cout << nums2.count(8) << '\n'; //0

    return 0;
}
/*
Date:2026/3/25
By Me
*/