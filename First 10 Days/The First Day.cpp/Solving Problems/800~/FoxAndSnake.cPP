#include <iostream>
using namespace std;

int main(){

    int n,m;
    int x = n;
    bool right = true;
    cin >> n >> m;

for(int i=1; i<=n;i++){
    if(i%2!=0){
        for(int i =1; i<=m;i++)
            cout << '#';

        cout << '\n';
        }
    else{
        if(right){
            for(int i=1; i<=m-1;i++)
                cout << '.';

        cout << "#\n";
        right = false;
        }

        else{
            cout << '#';
            for(int i=1; i<=m-1;i++)
                cout << '.';
            
        cout << "\n";
        right = true;
        }
    }
}
return 0;
}
/*
Date: 2026/3/29
By Me
*/