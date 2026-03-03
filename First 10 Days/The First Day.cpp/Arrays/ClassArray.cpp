/*
Sytax

Template < DataType , Size> name;

There are some Command Like 
name.fill(1)
name.at(1)
name.size()
name.front()
name.back()
name.empty() True Or False


*/


#include <iostream>
#include <array>     //WE have to Add The Libary To Eccess
using namespace std;

int main(){

    //int x[3] = {1,2,3}  // C- Style

    array<int,3> x = {1 ,2 ,3};
    cout << x[0] << "\n";
    cout << x[2] << "\n";

cout << "=========================================" << "\n";

    cout << x.size() << "\n"; //3

cout << "========================================="<< "\n";

    cout << x[0] << "\n";     //1
    cout << x.front() << "\n";//1

    //=========================

    cout << x[2] << "\n";     //3
    cout << x.back() << "\n"; //3

cout << "========================================="<< "\n";

    cout << x[1] << "\n";     //2
    cout << x.at(1) << "\n";  //2

cout << "========================================="<< "\n";

    cout << x.empty() << "\n"; //0 Because It is not empty

cout << "========================================="<< "\n";

    x.fill(00);
    cout << x[0] << "\n";
    

    return 0;
}
/*
Date : 2026/3/3
By Me 
*/