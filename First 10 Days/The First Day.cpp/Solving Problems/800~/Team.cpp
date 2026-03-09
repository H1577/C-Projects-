#include <iostream>
using namespace std;

int main(){
    
    int sum = 0;
    int n;
    bool x,y,z;
    cin >> n;

    int i = 0;
    while(i < n){
        cin >> x; cin >> y; cin >> z;
        if(x+y+z >= 2){
            sum++;
        }
        i++;
    }

    cout << sum;

    return 0;
}
/*
Date: 2026/3/6
By Me 
*/