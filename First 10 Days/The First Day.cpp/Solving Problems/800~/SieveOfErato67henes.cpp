#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >>n;

    while(n--){
        int s;
        cin >> s;
        int count =0;
        vector<int> nums(s);
        for(int i=0; i < s; i++)
            cin >> nums[i];

        bool find =  false;
        for(int i=0; i < s; i++){
            if(nums[i] == 67)
                find = true;
        }

        if(find)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
/*
Date: 2026/3/21
By Me
*/