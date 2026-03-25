#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

    int n;
    cin >> n;
    set<string> names;

    while(n--){
        string s;
        cin >> s;
        names.insert(s);
        
    }

    return 0;
}