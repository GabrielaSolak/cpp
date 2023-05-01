#include <iostream>
using namespace std;

void pokaz( int tab[], int n)
{
  cout << "Elementy tabeli: ";
  for( int i = 0; i < n; i++ )
    cout << tab[i] << "  ";
  cout << endl;
}

void odwrot( int tab[], int n)
{
  cout << "Odwrocona tabela: ";
  for( int i = n - 1;  i >= 0; i--)
    cout << tab[i] << "  ";
  cout << endl;
}

int main() {

  int tab[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(tab) / sizeof(tab[0]);

  pokaz( tab, n);
  odwrot( tab, n);

  return 0;
}
