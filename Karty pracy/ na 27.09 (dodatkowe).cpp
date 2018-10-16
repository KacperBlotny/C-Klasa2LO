#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int q, x, y, a, b, c = 0;

    cout << "Witaj w moim mini programie, bedziesz mial 7 opcji do wyboru. \nWybierz ktory typ zadania chcesz wykonac, a nastepnie wprowadz zmienne."  << endl;

    cout << "1 - suma kwadratów"                                       <<endl;
    cout << "2 - kwadrat sumy"                                         <<endl;
    cout << "3 - roznica szescianu"                                    <<endl;
    cout << "4 - iloczyn 3 zmiennych"                                  <<endl;
    cout << "5 - 20% podwojonej sumy dwoch liczb"                      <<endl;
    cout << "6 - aby obliczyc cene netto(prosze wpisac brutto)"        <<endl;
    cout << "7 - reszta z dzielenia"                                   <<endl;

                                                    cout << " \n \n"   <<endl;




       while(x != 0)

{

        cin >> x;

        if (x == 0) break;

        switch (x)

{

    case 1: cin >> a >> b;          cout << (a*a)+(b*b)                     <<endl;     break;
    case 2: cin >> a >> b;          cout << (a+b)*(a+b)                     <<endl;     break;
    case 3: cin >> a >> b;          cout << pow(a-b,3)                      <<endl;     break;
    case 4: cin >> a >> b >> c;     cout << a*b*c                           <<endl;     break;
    case 5: cin >> a >> b;          cout << 2*(a+b)/5 << (a+b)*0.4          <<endl;     break;
    case 6: cin >> y;               cout << y/1.23                          <<endl;     break;
    case 7: cin >> a >> b;          cout << a%b                             <<endl;     break;

        default:                    cout << "ERROR"                         <<endl;



}

}
    return 0;

}
