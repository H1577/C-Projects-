/*
Array C-style
Array Class 
Vector
Is More felsible
*/
#include <iostream>
#include <array>
#include <vector>
using namespace std;

void calc(vector<int> x){
    //We Do not have to put The size For The Loop
    int sum = 0;
    for(int i =0; i < x.size(); i++){
        sum += x[i];
    }
    cout << sum;
}

int main(){

    int nums[5] = {1,2,3,4};
    nums[4] = 61; //Problem Because The size is 4
    cout << nums[4] << '\n';

    cout << "===================\n";

    array<int,5> nums2 = {1,2,3,4};
    nums2[4] = 88; //Problem Because The size was 4
    cout << nums2[4] << '\n';

    cout << "===================\n";

    //We Do not have to put The Size
    vector<int> nums3 = {1,2,3,4};
    calc(nums3);

    return 0;
}
/*
Date:2026/3/16
By Me
*/