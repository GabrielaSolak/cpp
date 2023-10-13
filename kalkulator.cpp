#include <iostream>
using namespace std;

int kalkulator( double a, string operacja, double b)
{
    if( operacja == "+" )
        cout <<  "= " << a+b;
    else if ( operacja == "-" )
        cout <<  "= " << a-b;
    else if ( operacja == "/" )
        cout <<  "= " << a/b;
    else if ( operacja == "*" )
        cout << "= " << a*b;
}


int main()
{
    while (true)
    {
        cout << endl;
        double a, b;
        string operacja;
        cin >> a >> operacja >> b;

        kalkulator(a, operacja, b);
    }
}
