#include <iostream>
#include <vector>
using namespace std;
using cat = long double;
int main()
{

    vector <int> nums;

    //for(int i =0; i < nums.max_size()-1; i++){
        //nums.push_back(i);
        //cout << nums.at(i) << '\n';
    //}

    cat numsinsec = (1*nums.max_size())/8816.466234967622572;
    cat numsinmin = numsinsec/60;
    cat numsinhours = numsinmin/60;
    cat days = numsinhours/24;
    cat years = days/365;
    cat ages = years/100;

    cout << ages;

    return 0;
}