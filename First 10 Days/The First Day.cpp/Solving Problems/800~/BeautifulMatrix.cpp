#include <iostream>
using namespace std;

int main(){
    int steps = 0;
    int x;
    int y;
    bool Matrix[5][5];

    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){cin >> Matrix[i][j];}
    }

    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){if(Matrix[i][j] == 1){x = i; y = j;}}
    }

    while(Matrix[x][y] != Matrix[2][2]){
        if(x == 1||x == 0){
        Matrix[x][y]=Matrix[x++][y];     //x++ only
        steps++;}
        else if(x == 4 ||x == 3){
        Matrix[x][y]=Matrix[x--][y];     //x-- only
        steps++;}

        if(y == 1||y == 0){
        Matrix[x][y]=Matrix[x][y++];     //y++ only
        steps++;}
        else if(y == 4||y == 3){
        Matrix[x][y]=Matrix[x][y--];     //y-- only
        steps++;}
    }
    cout << steps;
    return 0;
}
/*
Date: 2026/3/7
By Me
*/

//Another Way a lotttt Easier

//Just Use d = abs(x-2)+abs(y-2)

/*#include <iostream>
using namespace std;

int main(){
    
    int x;
    int y;
    bool Matrix[5][5];

    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){cin >> Matrix[i][j];}
    }

    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){if(Matrix[i][j] == 1){x = i; y = j;}}
    }

    int steps = abs(x-2)+abs(y-2);

    cout << steps;
    return 0;
}*/