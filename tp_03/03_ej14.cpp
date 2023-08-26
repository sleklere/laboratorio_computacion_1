#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar un número y luego informar la cantidad de
divisores de ese número. Ejemplo 1. Si se ingresa 6 se listarán: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listarán: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listará: 2 divisores.
*/

int main() {
  int num, cantidadDivisores;

  cout << "Ingrese un numero: ";
  cin >> num;

  cantidadDivisores = 0;

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cantidadDivisores++;
    }
  }

  cout << cantidadDivisores << " divisores." << endl;

  return 0;
}