#include <iostream>
using namespace std;

int main(){

    string n;
    cin >> n;
    int sum =0;

    for(int i =0; i<n.size();i++){
        if(n[i]=='7'||n[i]=='4'){
            sum++;
        }
    }

    if(sum == 7 || sum == 4){
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
/*
Date;2026/3/14
By Me
*/

//Another Solution

/*
#include <iostream>
using namespace std;

int main(){

    long long n;
    cin >> n;
    int sum = 0;

    while(n>0){
        if(n%10 == 4||n%10 == 7){
            sum++;
        }
        n/=10;
    }

    if(sum == 7 || sum == 4){
        cout << "YES";
    }
    else
        cout << "NO";


    return 0;
}
*/