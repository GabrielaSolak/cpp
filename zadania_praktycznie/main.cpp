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

//Obliczanie pola trójkąta
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

//Ciąg Fibonacciego
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



int main()
{
    //minMax();
    //cout << endl << silnia(6) << endl;
    cout << oblicz(4, 3, 2);

    //fib(6);
    return 0;
}
