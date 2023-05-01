#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

const int N = 5;
int a[N];

int Maksymalna( string a, int N )
{
    int maks = a[N];
    while( int i = 1 )
    {
        if (a[i] > maks)
            maks = a[i];
    }

}

int Maksymalna_2( string a, int N )
{
    int maks = INT_MIN;
    while( int i = 0 )
    {
        if (a[ i ] > maks)
            maks = a[ i ];
    }
    return maks;
}

int main()
{

}
