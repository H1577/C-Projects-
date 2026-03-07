#include <iostream>
using namespace std;

int main(){
    string products[] = {"Item 1", "Item 2", "Item 3"};
    string sizes[] = {"Small", "Large", "X-Large"};

    for(int i =0; i<3; i++){
        cout << products[i] << "\n";

        for(int j =0; j<3 ; j++){
            cout << sizes[j];
            if(j == 2){
                cout << ".";
            }
            else
                cout << ", ";
        }
        cout << "\n=======================\n";
    }

    return 0;
}
/*
Date: 2026/3/6
By Me
*/