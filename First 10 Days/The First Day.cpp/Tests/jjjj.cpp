#include <iostream>
#include <vector>

using namespace std;

int main(){
    char b[][7] = {
    {'#','#','#','#','#','#','#'},
    {'#','.','.','#','.','.','#'},
    {'#','#','.','.','.','#','#'},
    {'#','.','#','.','.','.','#'},
    {'#','.','.','.','#','#','#'},
    {'#','o','.','.','.','.','#'},
    {'#','#','#','#','#','#','#'}
    };

    int pi = 3; int pj = 3;
    int di = -1; int dj = 0;

    int steps = 0;
    while (b[pi][pj] != 'o'){
        if(b[pi+di][pj+dj] != '#'){
            pi += di; pj =+ dj;
            steps++;
          } else {
            int di_ = di; di = -dj; dj = di_ ;
          }
    }


    }