#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar un número positivo y calcular e informar si el
mismo es un número primero. Recordar que un número primo es un número natural
que tiene exactamente dos divisores.
*/

int main() {
  int numPositivo, cantidadDivisores;

  cout << "Ingrese un numero positivo: ";
  cin >> numPositivo;

  cantidadDivisores = 0;

  for (int i = 1; i <= numPositivo; i++) {
    if (numPositivo % i == 0) {
      cantidadDivisores++;
    }
  }

  if (cantidadDivisores == 2) {
    cout << "Es un numero primo" << endl;
  } else {
    cout << "NO es un numero primo" << endl;
  }

  return 0;
}