#include <iostream>
using namespace std;

int main(){

    long long x,y;
    int n,m,a;
    cin >> n >> m >> a;

    x = (n+a -1)/a;
    y = (m+a -1)/a;

    /*if(m%a == 0){
        x= m/a;
    }
    else
        x= m/a + 1;
    
    if(n%a == 0){
        y= n/a;
    }
    else
        y= n/a + 1;*/

    cout << x*y;

    return 0;
}