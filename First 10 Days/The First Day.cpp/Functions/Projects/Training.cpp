/*
    Built in Functions

    tolower()
    toupper()
    isupper()
    islower()
    Project Swap Latters 
    isspace()
    Project Removing The Spaces
*/
#include <iostream>
#include <cctype>
using namespace std;

int main(){

    cout << "b\n";
    cout << toupper('b')<< '\n';//ASCII of Capital B -> 66
    cout << char(toupper('b')) << '\n'; //B
    //=====================================================
    cout << "H\n";
    cout << tolower('H')<< '\n';//ASCII of Capital B -> 104
    cout << char(tolower('H')) << '\n'; //h
    //======================================================

    //Project Swap Latters
    string s;
    cin >> s;
    for(int i =0; i<s.size();i++){
        if(isupper(s[i])){//Only In Conditions Compiler will get it
            cout << char(tolower(s[i]));
        }
        else{cout << char(toupper(s[i]));}
    }
    cout << '\n';


    //Project Removing The Spaces
    string a = "GG \n W P\t \r";
    int size = a.size();
    for(int i=0; i<size; i++){
        //if(s[i]==' '){
        //    continue;
        //}
        if(isspace(a[i])){
            continue;
        }
        cout << a[i];
    }

    return 0;
}
/*
Date:2026/3/14
By Me
*/
