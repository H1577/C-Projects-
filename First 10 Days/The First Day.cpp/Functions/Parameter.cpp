#include <iostream>
using namespace std;

void Hi(){
    cout << "Hello\n";
}

void Hi2(string name, int age){
    cout << "Hello " << name << '\n';
    cout << "Your Age is " << age;
}

int main(){

    Hi();

    Hi2("Leon", 40);

    return 0;
}
/*
Date: 2026/3/10
By Me
*/