#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//wypelnianie n-elementowa tablice wartosciami losowymi z podanego zakresu <a,b)
void Los(int t[], int n, int a, int b)
{
    srand(time(NULL));
    for(int c=0; c<n; c++)
    {
        t[c] = ((b-a)*rand()/RAND_MAX) + a;
    }
}

//wypisanie zawartosci funkcji
void Wypisz(int t[], int n)
{
    cout << "Elementy tablicy -> ";
    for(int c=0; c<n; c++)
    {
        cout << t[c] << ", ";
    }
}

//zwracanie pozycje pierwszego wystapienia najmniejszej wartosci w podanej tablicy
int Min(int t[], int start, int stop)
{
    int najmniejszy = t[start];
    int indeks = start;
    for(int c=start+1; c<stop; c++)
    {
        if(t[c] < najmniejszy)
        {
            najmniejszy = t[c];
            indeks = c;
        }
    }
    return indeks;
}

int minInd(int t[], int start, int stop)
{
    int indeks = start;
    for(int c=start+1; c<stop; c++)
    {
        if (t[indeks] > t[c])
        {
            indeks = c;
        }
    }
    return indeks;
}

//Sortowanie Bombelkowe
int sortB(int t[], int n)
{
    int x;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-j; i++)
        {
            if(t[i] > t[i+1])
            {
                x = t[i];
                t[i] = t[i+1];
                t[i+1] = x;
            }
        }
    }
}

//Sortowanie przez wybór
int sortWyb(int t[], int n)
{
    int x;
    for(int i=0; i<n; ++i)
    {
        int minIndeks = i;
        for(int j=i+1; j<n; ++j)
        if(t[minIndeks] > t[j])
        {
            minIndeks = j;
        }
        x = t[i];
        t[i] = t[minIndeks];
        t[minIndeks] = x;
    }
}

//Sortowanie przez wstawianie
int sortWst(int t[], int n)
{
    int key, j;
    for(int i=1; i<n; i++)
    {
        key = t[i];
        j = i - 1;

        while(j >=0 && key < t[j])
        {
            t[j+1] = t[j];
            j = j - 1;
        }
        t[j+1] = key;
    }
}

int main()
{
    int t[10];

    Los(t, 10, 0, 10);
    Wypisz(t, 10);
    cout << endl<< "Indeks min -> " << Min(t, 0, 9) << endl;
    cout << endl<< "Indeks min -> " << minInd(t, 0, 9) << endl;

    //sortB(t, 10);
    //Wypisz(t, 10);

    //sortWyb(t, 10);
    //Wypisz(t, 10);

    sortWst(t, 10);
    Wypisz(t, 10);

    return 0;
}
