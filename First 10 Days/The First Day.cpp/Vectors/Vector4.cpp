/*
x.size() => size 
x.max_size() => Maximum Size for Vector
x.capacity() => Storage Capacity (Before Adding)
x.front() => Access For The First Elemnt
x.back() => Access For The Last Elemnt
x.clear() => Clearing The Vector
x.empty() => To Check Empty Or Not (Condition)
*/
#include <iostream>
#include <vector>
using namespace std;
typedef int Cat;

Cat main(){

    vector<Cat> nums = {1,2,3,4};

    cout << nums.size() << '\n'; //4
    cout << nums.max_size() << '\n';
    cout << nums.capacity() << '\n';
    cout << nums.front() << '\n';//1
    cout << nums.back() << '\n';//4

    nums.clear();
    cout << nums.size() << '\n'; //0
    cout << nums.empty() << '\n'; // 1 (True)

}
/*
Date: 2026/3/18
By Me
*/