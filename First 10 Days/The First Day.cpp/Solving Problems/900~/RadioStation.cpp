#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    int n,t;
    cin >> n >> t;
    int times = n+t;
    string name,num;
    map<string,string> server;
    while(n--){
        string name,num;
        cin >> name >> num;
        num.push_back(';');
        server[num] = name;
    }
    while(t--){
        string name,num;
        cin >> name >> num;
        cout << name << ' ' << num <<" #"<< server[num] << '\n';
    }
    return 0;
}