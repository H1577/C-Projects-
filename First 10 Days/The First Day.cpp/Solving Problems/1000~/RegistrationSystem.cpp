#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    int n;
    cin >> n;
    map<string,int> names;

    while(n--){
        string s;
        cin >> s;
        if(!names.count(s)){
            cout << "OK" << endl;
            names[s]++;
        }
        else{
            cout << s << names[s]++ << endl;
        }
    }

    return 0;
}