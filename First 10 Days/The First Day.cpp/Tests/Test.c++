#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    long long price = 0;
    long long max = 0;
    cin >> n;
    vector<long long> nums(n);
    
    for(int i =0; i<n;i++){
        cin >> nums.at(i);
        if(nums.at(i)>max)
            max = nums.at(i);
    }
    for(auto p: nums){
        price = price+(max-p);
    }
    cout << price;
    return 0;
}