/*
Maps
-- Contains pair of Elements (key->value)
-- And Sorted But in unordered_map it is Random Sorting

Built in Functions
x.count(key) (True or False)
x.erase(key)
x.size()
x.clear()
x.empty() (True or False)
*/
#include <iostream>
#include <map>           //Sorted
#include <unordered_map> //Random Sorting
using namespace std;

int main(){

    unordered_map<string ,int> people = {{"Luffy",18},{"Nami",24}};

    people["Luffy"] = 21; //Adding
    people["Zoro"] = 28 ; //Adding
    people["Sanji"] = 23; //Adding

    cout << people["Luffy"] << '\n';  //21
    cout << people["Chopper"] << '\n';//0

    if(people.count("Luffy"))
        cout << "Luffy is Found" << '\n';

    cout << people.size() << '\n'; //5
    people.clear();
    cout << people.size() << '\n'; //0
    cout << people.empty() << '\n';//true

    return 0;
}