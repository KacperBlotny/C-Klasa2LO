#include <iostream>
#include <cmath>
using namespace std;

int main()

{

  int  x, a;
      cout << "Wybierz opcje od 1-5"                                      <<endl;
        cin  >> a;

    while(x != 0)


    {

        switch(a)


        {


    case 1: cin >> x;
        if(x<1) cout << 2*x                             <<endl;
                else cout << "Nie ma takiej funkcji"        <<endl; break;

    case 2: cin >> x;
        if(x==1) cout << -10                            <<endl;
                else cout << "Nie ma takiej funkcji"         <<endl; break;

    case 3: cin >> x;
        if(x==3) cout << pow(x-1,4)                     <<endl;
                else cout << "Nie ma takiej funkcji"         <<endl; break;

    case 4: cin >> x;
        if(x==6) cout << sqrt(x-4)                      <<endl;
                else cout << "Nie ma takiej funkcji"         <<endl; break;

    case 5: cin >> x;
        if(x!=1&&x!=3&&x!=6&&x>1) cout << 0             <<endl;
                else cout << "Nie ma takiej funkcji"         <<endl; break;


    default: cout << "Blad"


        }


    }


    return 0;
}
