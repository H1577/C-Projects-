#include <iostream>
using namespace std;

void Cal(long long num1,long long num2, char op){
    if(op == '+')
        cout << num1 + num2;
    else if(op == '-')
        cout << num1 - num2;
    else if(op == '*')
        cout << num1 * num2;
    else if(op == '/')
        cout << num1 / num2;
    else if(op == '%')
        cout << num1 % num2;
    else 
        cout << "Error";
}


int main(){

    long long numb1,numb2;
    char opr;
    cin >> numb1 >> opr >>numb2;

    Cal(numb1,numb2,opr);

    return 0;
}