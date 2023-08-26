#include <iostream>
using namespace std;

/*
Hacer un programa que muestre los números primos entre el 1 y el 10000. El
usuario no debe ingresar nada en este programa.
*/

int main() {
  int cantidadDivisores;

  for (int i = 1; i <= 1000; i++) {
    cantidadDivisores = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        cantidadDivisores++;
      }
    }
    if (cantidadDivisores == 2) {
      cout << i << " - ";
    }
  }

  return 0;
}