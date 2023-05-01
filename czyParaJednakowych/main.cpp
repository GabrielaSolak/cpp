#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

bool CzyParaJednakowychSasiadow(const int a[], int n )
{
    for( int i = 0; i < n; i++ )
        if( a[i] == a[i+1] )
            return true;
    return false;
}

bool CzyParaJednakowych( const int a[], int n )
{
    for( int i = 1; i < n; i++)
        for ( int j = 0; j < i; j++ )
            if( a[i] == a[j])
                return true;
    return false;
}


int main()
{
    int a[] = {1, 1, 4, 7, 4};
    int n = 5;

    cout << CzyParaJednakowych( a, n ) << endl;
    cout << CzyParaJednakowychSasiadow( a, n ) << endl;
}
