#include <iostream>
#include <cctype>
using namespace std;

//This is The Idea From toupper() and tolower
/*char op(char y){
    if(y == 'A' || y == 'a' ){
        return 'A';
    }
}*/

int main(){
    int big = 0;
    int small = 0;
    string s;
    cin >> s;
    int size = s.size();

    for(int i=0; i< size; i++){
        if(s[i]== tolower(s[i])){
            small++;
        }
        else
            big++;
    }

    if(big > small ){
        for(int i=0; i< size; i++){
            s[i] = toupper(s[i]);
        }
            cout << s;
    }
    else{
        for(int i=0; i< size; i++){
            s[i] = tolower(s[i]);
        }
            cout << s;
    }

    return 0;
}