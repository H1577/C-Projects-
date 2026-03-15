#include <iostream>
using namespace std;

void print(int x,int y){
    cout << x <<'\n';
    cout << y <<'\n';
}
void print(int x, int y, int z){
    cout << x <<'\n';
    cout << y <<'\n';
    cout << z <<'\n';
}
void print(int x, int y, string z){
    cout << x <<'\n';
    cout << y <<'\n';
    cout << z <<'\n';
}

int main(){

    print(5,10);
    print(4,6,8);
    print(37,88,"Hi");

    return 0;
}
/*
Date: 2026/3/14
By Me
*/