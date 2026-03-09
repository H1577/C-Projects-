#include <iostream>
using namespace std;

int main(){

    int t;
    unsigned long long a,b;
    int i = 0;

    cin >> t;
    int y[t];
    
    while(i < t){
      int x = 0;
      cin >> a; cin >> b;

    if(a%b != 0){
    x = b-(a%b);
    y[i] = x;}
    else   
    y[i] = x;

    i++;
    }

    int z = 0;
    while(z < t){
        cout << y[z] << "\n";
        z++;
    }
    
    return 0;
}
//Solved :))
//Date : 2026/3/4