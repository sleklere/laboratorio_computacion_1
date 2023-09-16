#include <iostream>
using namespace std;
/*
Se desea un programa que permita ingresar un número entero positivo llamado N y
muestre por pantalla el Mínimo divisor y el Máximo divisor de N. En el caso del
mínimo divisor, mostrar el divisor más chico distinto a 1 y N. En el caso del
máximo divisor, mostrar el divisor más grande distinto a 1 y N.

En el caso de que no se encuentre un mínimo divisor y un máximo divisor para N
indicar que N es un número primo.

*/

int main() {
  int N, minimoDivisor, maximoDivisor;

  minimoDivisor = 0;
  maximoDivisor = 0;

  cout << "Ingrese un numero: ";
  cin >> N;

  for (int i = 2; i < N; i++) {
    if (!minimoDivisor && ((N % i) == 0)) {
      minimoDivisor = i;
    }
    if (N % i == 0) {
      maximoDivisor = i;
    }
  }
  if (!minimoDivisor && !maximoDivisor) {
    cout << "N es un numero primo" << endl;
  } else {
    if (minimoDivisor) {
      cout << "El minimo divisor es: " << minimoDivisor << endl;
    }
    if (maximoDivisor) {
      cout << "El maximo divisor es: " << maximoDivisor << endl;
    } else {
      cout << "No hay maximo divisor" << endl;
    }
  }

  return 0;
}