#include <iostream>
#include <cmath>

using namespace std;

int main()

{
   int a, x;

        cout << "Wybierz funkcje od 1-4"        <<endl;

            cin   >> a;

        while(x != 0)

{

            switch(a)

 {
    case 1: cin >> x;
        if(x<7) cout << (pow(x,3)+1)                           <<endl;
            else cout << "Nie ma takiej funkcji"               <<endl; break;

    case 2: cin >> x;
        if(x==7) cout << cos(x-1)                              <<endl;
            else cout << "Nie ma takiej funkcji"               <<endl; break;

    case 3: cin >> x;
        if(x==9) cout << sqrt(3*x)                             <<endl;
            else cout << "Nie ma takiej funkcji"               <<endl; break;

    case 4: cin >> x;
        if(x>7 && x!=9) cout << -8*x                           <<endl;
            else cout << "Nie ma takiej funkcji"               <<endl; break;


               default: cout << "ERROR"                                      <<endl;



 }

 }


    return 0;
}
