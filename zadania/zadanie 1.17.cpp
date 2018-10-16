#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int x;

    cout << "\nPodaj wartosc funkcji\n" <<endl;

        while(x != 0)
       {


    if (x<7) cout << (x*x*x)+1 <<endl;

     else switch(x)

    {
        case 7: cout << "\n" <<cos(x-1)  <<endl; break;

        case 9: cout << "\n" << sqrt(3*x) <<endl; break;

        default: cout << "\n" << -1*(8*x) <<endl; break;


    }
            cin >> x;
        }
    return 0;
}
