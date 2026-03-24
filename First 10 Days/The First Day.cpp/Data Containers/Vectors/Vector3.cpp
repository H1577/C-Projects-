/*
Access
x.at(index)
x[] => You should not use it

Updating
x.at(index) = ?

Adding
x.push_back(The Value) => Add Elemnt in The End

Deleting
x.pop_back() => Remove Elemnt From The End
*/
#include <iostream>
#include <vector>
using namespace std;
using sii = int;

int main(){

    vector<sii> nums ={100,200,300};

    //Acsess
    cout << nums.at(0) << '\n'; //100
    cout << nums[0] << '\n' ; //100
    /*<== If You put out it of range You Will get
    a garbge Value That Maybe Ruins Your Code */

    cout << "=========================\n";

    //Update
    nums.at(0) = 10;
    cout << nums.at(0) << '\n'; //10

    cout << "=========================\n";

    //Add
    cout << nums.size() << '\n'; //3
    nums.push_back(23);
    cout << nums.at(nums.size()-1) << '\n';//23
    cout << nums.size() << '\n';//4

    cout << "=========================\n";

    //Remove
    cout << nums.size() << '\n'; //4
    nums.pop_back();
    //cout << nums.at(3) << '\n';//Error
    cout << nums.size() << '\n';//3

    return 0;
}
/*
Date: 2026/3/18
By Me
*/