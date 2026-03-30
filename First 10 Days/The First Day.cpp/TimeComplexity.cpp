/*
Time Complexity
--It is Very important in solving Problems And It 
  is The Thing That Tells You Your Code will get Time Limit Or Not .

We Count The Time By Steps
int x = 9; //1 step
cout << x; //1 step
return 0;  //1 step

3 steps O(3) = O(1)
We Do not care about The contants 

Big O
-The Speed Descening order

--O(1) However The input is The time will not change.     (counting 1+1)                   [<=10^9]
--O(log n) Each Step Decrease The Total Steps By a half.  (Binary Search)                  [<=10^9]
--O(n) The input and time are Direct Proportion.          (Calculating The Sum in an Array)[<=10^7]
--O(n log n) A little bit Slower Than O(n).               (Sorting)                        [<=10^5]
--O(n^2) When You Increase n The Time Will Be Much Higher.(Nested Loops)                   [<=1000]
--O(2^n) a lot slower.                                    (Trying All Of it)               [<=20]
--O(n!) It is Like (n-1)*(n-2)...                         (The Saleperson Problem)         [<=10]
*/
#include <iostream>
using namespace std;

int main(){

    int x =0;
    int y =1;
    cout << x; //O(1)

    int arr[5] = {1,2,3,4,5};
    int sum =0;
    for(int i=0;i<5; i++)
        sum += arr[i];
    cout << sum; //O(n)

    int arr2[3] = {1,23,4};
    for(auto p: arr){
        for(auto o:arr2){
            cout << p <<' '<< o;//O(n^2)
        }
    }
    
    return 0;
}