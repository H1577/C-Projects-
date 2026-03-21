#include <iostream>
#include <vector>
using namespace std;

int main(){

    long long n,q;
    cin >> n >> q;

    vector<long long> nums(n+1 ,0);

    for(int i =1; i <= n; i++){
        long long x;
        cin >> x;
        nums[i] = x + nums[i-1];
    }

    while(q--){
        long long a,b;
        cin >> a >> b; 
        if(b > a)
        cout << nums[b] - nums[a-1] << '\n';
        else
        cout << nums[a] - nums[b-1] << '\n';
    }

    return 0;
}
/*
Why I have to suffer
Date : 2026 / 3 / 20
*/