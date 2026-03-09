/*
--Continue 
When you Get To The Condition "Skip This Loop And Continue"
--Break
When you Get To The Condition "Stop The Entire Loop"
*/

#include <iostream>
using namespace std;

int main(){

    int nums[] = {10,20,30,40,50};

    for(int i =0; i < 5; i++){

        if(nums[i] == 20){continue;} //We Do not want Number 20;
        cout << nums[i] << "\n";
        cout << "After\n";
    }

    for(int i =0; i < 5; i++){
        
        if(nums[i] == 20){break;}//Stop The Entire Loop When 20
        cout << nums[i] << "\n";
        cout << "After\n";
    }

    return 0;
}
/*
Date: 2026/3/7
By Me
*/