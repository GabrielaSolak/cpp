#include <iostream>

using namespace std;

int main()
{
    int tab[] = {2,3,6,8,5};
    int n = sizeof(tab) / sizeof(tab[0]);

    //wyswietlenie
    cout << "Elementy tablicy: ";
    for(int i=0; i<n; i++)
        cout << tab[i] << "  ";
    cout << endl;

    //odwrocenie
    cout << "Odwrocone elementy: ";
    for(int i=n-1; i>=0; i--)
        cout << tab[i] << "  ";
    cout << endl;

    //sortowanie bombelkowe
    cout << "Posortowane elementy: ";
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-j; i++)
        {
            if(tab[i] > tab[i+1])
            {
                int y = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = y;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << tab[i] << "  ";
    cout << endl;

    return 0;
}
