#include <iostream>
using namespace std;

int main(){

    int i =11;
    while(i < 10){
        cout << i << '\n';
        i++;
        if(i==10){
            break;
        }
    }

    //Difrences Between Them

    int j = 11;
    do{
        cout << j;
        j++;
    }while(j<10);


    return 0;
}
/*
Date: 2026/3/6
By Me
*/