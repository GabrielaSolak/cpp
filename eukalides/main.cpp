#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int Eukalides( int x, int y )
{
    while( x != y)
        if ( x > y )
            x -= y;
        else
            y -= x;
    return x;
}

void Testuj( int x, int y )
{
    printf( "NWD( %3d, %3d ) = %3d\n", x, y, Eukalides(x, y));
}

int main()
{
    Testuj( 60, 35 );
    Testuj( 5, 6 );
    Testuj( 35, 60 );
    Testuj( 1, 1);
    Testuj( 89, 77);

    return 0;
}
