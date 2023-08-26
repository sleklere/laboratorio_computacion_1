#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 8 números y luego informar si todos
están ordenados en forma creciente. En caso de haber dos números “empatados”
considerarlos como crecientes. Por ejemplo si la lista fuera: Ejemplo 1: -10, 1,
5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado” Ejemplo 2: 10,
10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado” Ejemplo 3:
10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
*/

int main() {
  int num, comparador;

  comparador = 0;

  cout << "Ingrese 8 numeros: " << endl;
  for (int i = 1; i <= 8; i++) {
    cout << "Numero " << i << ": ";
    cin >> num;

    if (i == 1 && !comparador) {
      comparador = num;
    }
    if (num < comparador) {
      cout << "Conjunto NO ordenado" << endl;
      return 0;
    }
    comparador = num;
  }

  cout << "Conjunto ordenado" << endl;

  return 0;
}