/*
 Advanced Syntax
*/
#include <iostream>
using namespace std;

int main(){

    int x[]={3,34,6,2,3,5};
    int y = sizeof(x)/sizeof(x[0]);

    for(int i=0; i<y; i++){
        cout << x[i] << ' ';
    }

    cout << '\n';

    //We cAN delete them But Carefully
    int i = 0;
    for(; ;){
        cout << x[i] << ' ';
        i++;
        if(i == y){
            break;
        }
    }

    return 0;
}
/*
Date: 2026/3/6
By Me
*/