#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//Silnia
int silnia(int n)
{
    int wynik = 1;
    for(int i=1; i<=n; i++)
    {
        wynik *= i;
    }
    return wynik;
}

//Szukanie maksimum i minimum
void minMax()
{
    int a, b, n;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "n: ";
    cin >> n;
    int *tab = new int[n];

    for(int i=0; i<n; i++)
    {
        tab[i] = (b-a)*rand()/RAND_MAX+a;
    }
    //wyswietl i min/max
    int maxx = tab[0];
    int minn = tab[0];
    for(int i=1; i<n; i++)
    {
        cout << tab[i] << ", ";

        if(maxx < tab[i])
            maxx = tab[i];
        else if(minn > tab[i])
            minn = tab[i];
    }
    cout << endl << "min: " << minn << ", max: " << maxx;
    delete[] tab;
}

//Obliczanie pola trójk¹ta
double oblicz(int a, int b, int c)
{
    //sprawdzenie trojkata
    if(a<b+c && b<a+c && c<b+a)
    {
        double p = (a+b+c)/2.0;
        double pole = sqrt(p*(p-a)*(p-b)*(p-c));

        return pole;
    }
    else
    {
        return -1;
    }

}

//Ciag Fibonacciego
void fib(int n)
{
    int *t = new int[n];
    t[0] = 0;
    t[1] = 1;

    for(int i=2; i<n; i++)
    {
        t[i] = t[i-1] + t[i-2];
    }
    //wyswietl
    for(int i=0; i<n; i++)
    {
        cout << t[i] << ", ";
    }
    delete[] t;
}

//Srednia arytmetyczna
void srednia()
{
    int l;
    int tab[100];
    int j;
    for(j = 0; tab[j-1] != -1 || j == 100; j++)
    {
        cin >> tab[j];
    }

    //wypisanie i suma
    int suma = 0;
    for(int i = 0; i < j-1; i++)
    {
        cout << tab[i] << ", ";
        suma += tab[i];
    }
    cout << endl;

    //srednia
    cout << suma / (j - 1);

}

//Uklad równan liniowych
struct wynik
    {
        float x;
        float y;
    };

wynik rownania_liniowe(float a_1, float b_1, float c_1, float a_2, float b_2, float c_2)
{
    float W = (a_1 * b_2) - (a_2 * b_1);
    float Wx = (c_1 * b_2) - (c_2 * b_1);
    float Wy = (a_1 * c_2) - (a_2 * c_1);

    wynik yx;
    yx.x = Wy / W;
    yx.y = Wx / W;

    return yx;
}

int main()
{
    //minMax();
    //cout << endl << silnia(6) << endl;
    //cout << oblicz(4, 3, 2);
    //fib(6);
    //srednia();

    //cout << rownania_liniowe(4, -7, -1, 2, 3, 6).x << ", ";
    //cout << rownania_liniowe(4, -7, -1, 2, 3, 6).y;
    
    return 0;
}
