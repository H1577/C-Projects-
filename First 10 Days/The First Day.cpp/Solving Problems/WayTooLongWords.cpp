#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;
    string name;

    while(n--){
        cin >> name;
        if(name.length()>10){
            cout << name.front() << name.length()-2 << name.back() << '\n';
        }
        else
        cout << name << '\n';
    }

    return 0;
}


/*
I Tried But I could not
Date: 2026/3/6
By Me
*/


//My Trying --->

/*#include <iostream>
#include <string>
using namespace std;

int main(){

    int x;
    int n;
    cin >> n;
    string name;
    char front[n];
    int num[n];
    char back[n];
    string name1;


    while(n--){
        cin >> name;
        if(name.length()>10){
            front[x] = name.front(); 
            num[x] = name.length()-2; 
            back[x] = name.back();
        }
        else
        name1 = name;


     x++;
    }

    for(int i = 0; i < x; i++){
        cout << name1
    }
    for(int i = 0; i < x; i++){
        cout << front[i] << num[i]<< back[i] << '\n';
    }

    return 0;
}*/