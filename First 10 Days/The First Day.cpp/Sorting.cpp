/*
Sorting 
We have to include <algorithm> 
The Time Complexity is O(n log n) [<=10^5]

How to sort In an Array
--sort(name,name+size);
How to sort In vector
--sort(name.begin(),name.end())

Now When We want to sort Reversely
--Array
sort(name,name+size,greater<DataType>());
--Vector
sort(name.begin(),name.end(),greater<DataType>());
sort(name.rbegin(),name.rend()); //iterators

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myrule(int x, int y){
    if(x%3 == 0 && y%3 != 0)
        return true;
    else if(x%3 != 0 && y%3 == 0)
        return false;
    else
        return x<y;
}

int main(){

    int arr1[] = {0,7,4,8,6,9,5,1,3,2};
    sort(arr1,arr1+10);
    //sort(arr1+10,arr1); We can not do this
    for(auto p: arr1)
        cout << p;

    cout << '\n';

    vector<char> vec = {'g','d','a','c','f','b','e'};
    sort(vec.begin(),vec.end());
    //sort(vec.end(),vec.begin()); We can not do this
        for(auto p: vec)
        cout << p;

    cout << "\n====================================\n";

    int arr2[] = {100,200,300,700,500,400,100};
    sort(arr2,arr2 +7,greater<int>()); //From Big to Small
    for(auto p: arr2)
        cout << p << ' ';

    cout << '\n';

    vector<string> vec2 = {"alo","hi","you","hello"};
    sort(vec2.begin(),vec2.end(),greater<string>());
    sort(vec2.rbegin(),vec2.rend());
    for(auto p: vec2)
        cout << p << ' ';

    cout <<  "\n====================================\n";

    int arr3[] = {3,6,9,12,1,5,7,15};
    sort(arr3,arr3+8,myrule);
    for(auto p: arr3)
        cout << p << ' ';

    
    return 0;
}