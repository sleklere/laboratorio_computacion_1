#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar un número y luego informar todos los divisores
de ese número. Ejemplo 1. Si se ingresa 6 se listarán: 1, 2, 3 y 6 Ejemplo 2. Si
se ingresa 9 se listarán: 1, 3 y 9. Ejemplo 3. Si se ingresa 11 se listarán 1
y 11.
*/

int main() {
  int num;

  cout << "Ingrese un numero: ";
  cin >> num;

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << i << " - ";
    }
  }

  return 0;
}