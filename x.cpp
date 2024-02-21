#include <iostream>
using namespace std;

int main() {
  int nota = 1;
  double cant = 0, sum = 0;
  double promedio = 0;
  while( nota != 0 ) {
    cin >> nota;
    sum += nota;
    cant++;
  }
  promedio = sum / cant;
  cout << promedio;
  return 0;
}