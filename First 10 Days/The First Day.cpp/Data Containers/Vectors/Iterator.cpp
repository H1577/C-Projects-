/*
Sytax
Container<Type>::iterator IteratorName;
auto name =  ? ;

What Is Iterators
Iterators Used To Point To Memory Address Of The Containers
Like : Array,Vector,And List.
And Support For Many Algorithms Like Sorting And Finding
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {10,20,30,40};
    vector <int>::iterator first = nums.begin(); //We point to The First Element
    auto secend = nums.begin()+1;

    cout << "The First Element is " << *first << '\n'; //'*'To Ascess The Element
    cout << "The Secend Element is " << *secend << '\n';
    cout << "The First Element is " << *nums.begin() << '\n';

    nums.erase(nums.begin(),nums.begin()+2); //Example For Using 

    cout << "The First Element After Deleting is " << *first << '\n'; //Now It is 30

    return 0;
}
/*
Date: 2026/3/18
By Me
*/