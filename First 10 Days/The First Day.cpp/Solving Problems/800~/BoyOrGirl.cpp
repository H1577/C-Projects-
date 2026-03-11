#include <iostream>
using namespace std;

    string s;
    int size = s.size();
    char Letters[]=
    {'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int sum = 0;

    bool H(char L){
    int x = 0; //****/
    while(x<26){
    if(L == Letters[x]){
        Letters[x] = '0'; //*****/
        return true;
    }
        x++;
    }
    return false;

    //A Way Faster For The Compiler.
    
    /*int index = L -'a';
    if(L == Letters[index]){
        Letters[index] = '0';
        return true;
    }
    else
        return false;*/
    
}

int main(){

    cin >> s;
    int size = s.size();

    for(int i=0; i<size;i++){
        for(int j = 0; j<size;j++){
            if(s[i] != s[j] && H(s[j]))
                sum++;
            
        }
    }

    if(sum%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else
        cout << "IGNORE HIM!";

    return 0;
}
/*
Date: 2026/3/11
By Me
*/

//Another Way to search. int index = x -'a';