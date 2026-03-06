#include <iostream>
using namespace std;

int main(){

    int x[]={100,200,300,400,500,600,700};
    int y = sizeof(x)/sizeof(x[0]);

    for(int i=0; i<y; i++)
    {
        cout << x[i] << '\n'; //100,300,500,700
        i++;
    }

    cout << "====================================" << '\n';

    for(int i=y-2; i>1; i--)
    {
        cout << x[i] << '\n'; //600,500,400,300
    }

    cout << "====================================" << '\n';

    int i=y-2;
    for(;;)
    {
        cout << x[i] << '\n'; //600,500,400,300
         i--;
         if(i==1){
            break;
         }
    }
    
    return 0;
}