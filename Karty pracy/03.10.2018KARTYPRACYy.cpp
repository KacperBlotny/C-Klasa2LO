#include <iostream>
                                                                    // p - pierwsz      a - radnom
using namespace std;

int pot (int a, int p)
{
    int pom = 1;

        for(int i=0; i<p; i++) pom=pom*a;

    return pom;

}
int main()
{
    const int LIMIT=20;
    int a, b, c, q, p, x, k, s, pom=1;


    cout << "\nWybierz opcje ktora chcesz sprawdzic\n"                                          <<endl;

    cout << "1 - sprawdz czy liczba jest podzielna przez 3"                                     <<endl;
    cout << "2 - sprawdz czy liczba jest trzycyfrowa i podzielna przez 17"                      <<endl;
    cout << "3 - sprawdz czy uzytkownik jest pelnoletni"                                        <<endl;
    cout << "4 - sprawdz czy ciezarowka moze bezpiecznie przejechac przez most z limitem"       <<endl;
    cout << "5 - sprwadz czy trzecia podana liczba miesci sie miedzy dwiema pierwszymi"         <<endl;
    cout << "6 - sprawdz czy pierwsza liczba spelnia twierdzenie Fermata"                       <<endl;
    cout << "7 - sprawdz czy bajtozabka osiowa pokona wyznaoczny dystans\n\n"                   <<endl;

        while(x != 0)
  {

        cin >> x;
        //if (x == 0) break;

    switch(x)

    {
        case 1: cout << "case 1 \n";         cin >> a;

            if (a%3==0) cout << "liczba jest podzielna przez 3 \n"                          <<endl;
                else cout << "liczba nie jest podzielna przez 3 \n"                         <<endl; break;


        case 2: cout << "case 2 \n";         cin >> q;

            if (q>99 && q<1000 && q%17==0) cout << "liczba spelnia warunek \n"              <<endl;
                else cout << "liczba nie spelnia warunku \n"                                <<endl; break;


        case 3: cout << "case 3 \n";         cin >> a;

            if (a>=18) cout << "uzytkownik jest pelnoletni \n"                             <<endl;
                else cout << "uzytkownik nie jest pelnoletni \n"                           <<endl; break;


        case 4: cout << "case 4 \n";         cin >> a;

            if (a <= LIMIT) cout << "ciezarowka spelnia wymogi \n"                          <<endl;
                else cout << "ciezarowka nie spelnia wymogu \n"                             <<endl; break;


        case 5: cout << "case 5 \n";         cin >> a >> b >> c;

            if ((a<c && c<b) || (b<c && c<a)) cout << "tak"                                 <<endl;
                else cout << "trzecia wpisana liczba nie znajduje sie miedzy 1 a 2"         <<endl; break;

        case 6: cout << "\ncase 6 \n\n";         cin >> p >> a;


             if (((pot(a,p))-a) % p == 0)cout << "wpisane liczby spelniaja twierdzenie"    <<endl;                  // 6 10 10
                else cout << "wpisane liczby nie spelniaja twierdzenia"                    <<endl; break;


         case 7: cout << "case 7 \n" << "Podaj punkt p, k na osi oraz dystans skoku zabki czyli s\n"       <<endl;
                                                cin >> p >> k >> s;

            if ((k-p)/3 <= s) cout << "zabka przejdzie wyznaczony dystans"                 <<endl;
                else cout << "zabka nie dotarla"                            <<endl; break;






        default: cout << "ERROR"                                                            <<endl; break;







    }





   }






    return 0;
}
