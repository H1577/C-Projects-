#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x = 0;
    int p,h;
    cin >> p >> h;
    vector<int> people(p);
    for(int i=0; i<p; i++){
        cin >> people[i];
        if(people[i]>h)
            x+=2;
        else
            x++;
    }
    cout << x;
    return 0;
}
/*
Date:2026/3/22
By Me
*/