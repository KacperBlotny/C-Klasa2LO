#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a, b, c, x;

    cout << "\nPodaj wartosc funkcji\n" <<endl;

        while(x != 0)
    {


    if (x<1) cout << 2*x    <<endl;

     else switch(x)

    {
        case 1: cout << -10 << "\n" <<endl; break;

        case 3: cout << "\n" << 16 /*pow(x-1,4) */ <<endl; break;

        case 6: cout << "\n" << sqrt(2.0) /* sqrt(x-4) */ <<endl; break;

        default: cout << "\n" << 0 <<endl; break;



    }

            cin >> x;
        }
    return 0;
}
