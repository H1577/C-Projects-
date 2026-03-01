#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    while (x <= 10){
        cout << x << ", ";
        x++;
    }
    cout << "Yaaayyyy\n";

    int y = 2;
    while (y <= 20){
        cout << y << " ";
        y+=2;

    }

    cout << "\n";

    int z =1;
    while(z <= 15){
        cout << z << " ";
        z += 2 ;

    }

    cout << "\n";

    int a;int b = 0;
    cin >> a;       // 40 / 10 = 4  , 8866 / 10 = 886  
                    // You can count How many Numbers in a number by plus one in (b).
                    //Until it become zero.
    
    while(a > 0){
         a /= 10;   // 90/10 = 9
         b++;       //We count The First Number 
    }

    cout << b;

    return 0;
}