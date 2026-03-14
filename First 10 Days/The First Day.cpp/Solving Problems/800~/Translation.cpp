#include <iostream>
#include <string>
using namespace std;

int main(){
    int x =0;
    string s,t;
    cin >> s >> t;
    int size = s.size();
    char b[size+1];                  

    for(int i =s.size()-1;i>=0;i--){
      b[x] = s[i];
      x++;
    }

    b[size] = '\0'; //To Make it String

    if(b == t)//Comparing between strings
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
/*
Date:2026/3/14
By Me
*/