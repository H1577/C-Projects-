#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    cin >> text;
    string Rev_text;
    int size = text.size();
    int x = 0;

    for(int i= size-1; i>=0;i--){
        cout << text[i];
        Rev_text += text[i];
        x++;
    }

    cout << "\n";

    if(Rev_text == text)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
/*
Date: 2026/3/6
By Me
*/