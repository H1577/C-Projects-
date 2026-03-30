#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    map<string,int> match;
    for(int i=0; i<n; i++){
        cin >> s;
        match[s]++;
    }

    int max =0;
    string winner;
    for(auto p: match){
        if(p.second >= max){
            max = p.second;
            winner = p.first;
        }
    }
    cout << winner;
    return 0;
}