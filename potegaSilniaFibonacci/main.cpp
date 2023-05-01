#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

unsigned wynik;

unsigned silnia_n( unsigned n )
{
    if( n <= 1 )
        wynik = 1;
    else if( n > 1 )
        wynik = n * silnia_n( n - 1 );
    return wynik;
}

unsigned wynik_fib;

unsigned fibonacci( unsigned n )
{
    if( n <= 1 )
        wynik_fib = n;
    else ///  n > 1
        wynik_fib = fibonacci( n - 2 ) + fibonacci( n - 1 );
    return wynik_fib;
}

int main()
{
    unsigned n = 7;

    printf( "silnia z %d wynosi: %d\n", n, silnia_n( n ) );

    printf( "Fibonacci z %d wynosi: %d", n, fibonacci( n ) );

    return 0;
}
