#include <iostream>
using namespace std;

void Multi(int nums[],int count){

    long long Result = 1;
    for(int i=0 ; i<count; i++){
        Result *= nums[i];
    }
    cout << Result;
}

int main(){

    int Number[] = {7897,3434,1223,545};
    int numsize = size(Number);
    Multi(Number,numsize);
    
    return 0;
}