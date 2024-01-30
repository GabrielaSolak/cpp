#include <iostream>

using namespace std;

int main()
{
    /// struktury
    struct Osoba
    {
        char imie[10], nazwisko[20];
        int id;
    };

    Osoba uczen1 = {"jan", "Nowak", 1};

    Osoba uczen2;
    Osoba *p = &uczen2;
    uczen2.id = 2;

    cout << uczen1.imie << endl;
    cout << uczen2.id << endl;

    struct O
    {
        char x;
        double y;
    };
    cout << sizeof(O) << endl;


    /// Pola bitowe
    struct pb1
    {
        unsigned a : 7,
                 b : 7,
                   : 1, // pole anonimowe
                 d : 1;
    };
    cout << sizeof(pb1) << endl;


    /// Unie
    // unie wspoldziela ten sam obszar pamieci (oszczedzamy miejsce)
    union Zmienne
    {
        int a;
        char b;
        double c;
    };

    Zmienne zm1;
    zm1.a = 5;
    cout << zm1.a << ", ";
    zm1.b = 'o';
    cout << zm1.b << ", ";
    cout << zm1.a << endl;



    return 0;
}
