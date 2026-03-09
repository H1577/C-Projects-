#include <iostream>
#include <string>
using namespace std;

int main(){

    string test;
    cin >> test;
    int size = test.size();
    int num1 = 0; 
    int num2 = 0; 
    int num3 = 0; 

    for(int i = 0; i < size; i+=2){
        switch(test[i]){
            case '1': ++num1;break;
            case '2': ++num2;break;
            case '3': ++num3;break;
        }
    } 

    bool first = true;

    for(int x =0; x < num1 ; x++){
        if(!first) cout << "+";
        cout << 1;
        first = false;
    }
    for(int x =0; x < num2 ; x++){
        if(!first) cout << "+";
        cout << 2;
        first = false;
    }
    for(int x =0; x < num3; x++){
        if(!first) cout << "+";
        cout << 3;
        first = false;
    }
    
    return 0;
}