#include <iostream>
using namespace std;

int main() {
  int cantidadNumeros = 0;
  cout << "Ingrese 10 numeros para verificar si son pares y mayores que 15" << endl;
  for( int i = 0; i < 10; i++ ) {
    int numero;
    cin >> numero;
    bool esPar = ( numero % 2 ) == 0;
    if( esPar && ( numero > 15 ) ) {
      cantidadNumeros++;
    }
  }
  cout << "La cantidad de numeros pares y mayores que 15 es: " << cantidadNumeros << endl;
  return 0;
}
