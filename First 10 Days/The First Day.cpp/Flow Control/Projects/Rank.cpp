#include <iostream>
using namespace std;

int main()
{
  int Score;
  cin >> Score;

  if (Score > 0)
  {
    if (Score <=500){
    cout << "Bad";}

    else if (Score <=1000){
    cout << "Good";}

    else{
    cout << "Legend";}
  }
  else{
    cout << "No Rank";
  }
  
  return 0;
}