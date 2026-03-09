#include <iostream>
using namespace std;

int main(){

    int x=0;
    int n;
    cin >> n;
    string m;

    while(n--){
        cin >> m;

        if(m == "X--")
            x--;
        else if(m == "--X")
            x--;
        else if(m == "X++")
            x++;
        else if(m == "++X")
            x++;

    }

    cout <<x<<'\n';

    return 0;
}
/*
Date: 2026/3/6
By Me
*/

//Another Solution

/*
#include <iostream>
using namespace std;

int main(){

    int x=0;i nt n;
    cin >> n; string m;
    while(n--){
        cin >> m;
        if(m[1] == '+') x++; else x--;
    }
    cout << x;
    return 0;
}
*/