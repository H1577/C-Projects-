#include <iostream>
using namespace std;

int check(int y){

    int a = y%10;
    int b = (y%100)/10;
    int c = (y%1000)/100;
    int d = y/1000;

    if(a!=b && a!= c && a!= d && b != c && b != d && c != d)
        return y;
    else
        return check(y+1);
}

int main(){

    int s;
    cin  >> s;
    cout << check(s+1);
    
    return 0;
}
/*
Date: 2026/3/23
By Me 
*/