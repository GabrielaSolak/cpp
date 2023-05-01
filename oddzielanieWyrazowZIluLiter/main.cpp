#include <iostream>
using namespace std;

int main()
{
    /*
    string s = "Ala ma psa ";

    bool poprz = ' ';
    for( int i = 0; i < s.length(); i++ )
    {
        char c = s[ i ];
        if( poprz == ' ' && c != ' ' || poprz != ' ' && c == ' ' )
            cout << "|";
        cout << c;
        poprz = c;
    }
    */


    // oddzielanie wyrazów " | "
    string s = "Ala ma psa ";

    bool popr = false;
    for( int i = 0; i < s.length(); i++ )
    {
        bool biez = s[ i ] != ' ';
        if( !popr && biez || popr && !biez )
            cout << "|";
        cout << s[ i ];
        popr = biez;
    }

    cout << endl;

    // pokazuje z ilu liter sklada sie wyraz
    int licznik = 0;
    bool poprz = false; // nie litera
    for( int i = 0; i < s.length(); i++ )
    {
        bool biez = s[ i ] != ' ';
        if( !poprz && biez )
        {
            cout << "<";
            licznik = 0;
        }

        else if( poprz && !biez )
        {
            cout << ">" << "(" << licznik << ") ";
        }

        if( biez )
        {
            cout << s[ i ];
            ++licznik;
        }
        poprz = biez;
    }
    return 0;
}

