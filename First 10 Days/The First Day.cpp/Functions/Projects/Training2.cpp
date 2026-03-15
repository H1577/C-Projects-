/*
Built-In Functions
    max() 
    min()
    Accept two numbers 
    count()

*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cout << min(4,2) << '\n'; //2
    cout << min({8,6,54,2,-3,2}) << '\n'; //-3
    cout << min('l','P') << '\n'; //ASCII Values 'P'

    cout << "====================\n";

    cout << max(4,2) << '\n'; //4
    cout << max({8,6,54,2,-3,2}) << '\n'; //54
    cout << max('l','P') << '\n'; //ASCII Values 'l'

    cout << "====================\n";
    //How To Do them

    int nums[] = {5,4,44,33,11,-7,-22,1};
    int size = sizeof(nums)/sizeof(nums[0]);
    int num = nums[0];

    for(int i=0; i<size ; i++){
        if(nums[i]<num) //If We want max just type > instead of <
            num = nums[i];
    }
    cout << num << '\n';

    cout << "====================\n";

    int nums2[] = {3,9,3,2,11,3,3,3,3};
    int size2 = sizeof(nums2)/sizeof(nums2[0]);
    int goal = 3;
    int count = 0;

    for(int i=0 ; i <size2 ; i++){
        if(nums2[i] == goal){count++;}
    }
    cout << count << '\n';
    return 0;
}
/*
Date: 2026/3/14
By Me
*/