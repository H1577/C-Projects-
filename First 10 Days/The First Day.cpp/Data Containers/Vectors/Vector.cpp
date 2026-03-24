/*
Sytax

vector<DataType> vector’s Name

We Do not have to Put The Size
We Can Select The size 
You Can use x.at(i) or x[i] for getting The Element

You can decrease or increase The size or Adding New Elemnts
x.push_back() Adding New elemnt and increase The Size
x.size() Shows You The Size

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {5,6,8,33};
    vector<int> nums1(3,5);//Size is 3 and All Elements are 5
    vector<int> nums2(6); //All of Elemnts are 0


    for(int i=0; i<nums.size(); i++){
        cout << /*nums[i]*/ nums.at(i) << ' ';
    }

    cout << "\n========================\n";

    for(int i=0; i<nums1.size(); i++){
        cout <<  nums1.at(i) << ' ';
    }

    cout << "\n========================\n";

    for(int i=0; i<nums2.size(); i++){
        cout <<  nums2.at(i) << ' ';
    }

    cout << "\n========================\n";

    cout << "Size Of Vector " <<nums.size() << '\n';

    nums.push_back(700); //Adding New Elemnt

    for(int i=0; i<nums.size(); i++){
        cout << nums.at(i) << ' ';
    }

    cout << "\nSize Of Vector " <<nums.size();

    cout << "\n========================\n";

    //Updating The Elemnts
    nums.at(0) = 67;
    nums[1] = 0;

    for(int i=0; i<nums.size(); i++){
        cout << nums.at(i) << ' ';
    }

    return 0; 
}
/*
Date: 2026/3/16
By Me
*/