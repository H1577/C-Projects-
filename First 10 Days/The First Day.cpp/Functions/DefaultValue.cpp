#include <iostream >
using namespace std;

//We Have To Write Default Values in All Of The Parameter
void Hi(string masg = "Hello", string name = "Stranger"){
    cout << masg <<' '<< name << '\n';
}

int main(){

    Hi("Hey","Body");     //(Good :))

    //Hi("Hi");             (Problem)
    //Hi("Hello","Man",22); (problem)

    //If WE Do not type or above or less Arguments =>(Problem)

    //========================================================================

    Hi();
    //But If You Write In The Function Default Values It Will Be Alright
    return 0;
}
/*
Date: 2026/3/11
By Me
*/