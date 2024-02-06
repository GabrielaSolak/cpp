#include <iostream>

using namespace std;

int main()
{
    //Klasy i Hermetyzacja

    //tworzenie klasy
    class NazwaKlasy
    {
    public:
        int x, y;
        void wypisz()
        {
            cout << x << " - " << y;
        }
    //private
    //protected
    };

    NazwaKlasy Obiekt1;
    Obiekt1.x = 1;
    Obiekt1.y = 3;
    Obiekt1.wypisz();

    cout << endl;

    class Ulamek
    {
        int licznik, mianownik;
    public:
        int wpisz(int l, int m) //metoda
        {
            licznik = l;
            if(m == 0)
                mianownik = 1;
            else
                mianownik = m;
        }
        double wynik()
        {
            cout << (double) licznik / mianownik << endl;
        }
    };

    Ulamek l1;
    l1.wpisz(2, 0);
    l1.wynik();

    Ulamek l2;
    l2.wpisz(20, 9);
    l2.wynik();

    cout << endl;

    //Konstruktor i destruktor
    class Klasa
    {
    public:
        Klasa() //konstruktor domyslny (bez argumentow)
        {
            cout << "tworzenie obiektu" << endl;
        }
        Klasa(int l) //konstruktor dodatkowy
        {
            cout << "konstruktor dodatkowy " << l << endl;
        }
        ~Klasa()
        {
            cout << "destruktor" << endl;
        }
    };

    Klasa Ob1;
    Klasa Ob2(2);

    cout << endl << endl;
}
