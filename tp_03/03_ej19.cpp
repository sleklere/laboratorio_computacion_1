#include <iostream>
using namespace std;

/*
Dada una lista de 10 números enteros. Calcular e informar el primer número par,
el primer número primo.
*/

int main() {
  int num, primerNumPar, primerNumPrimo, contador;

  primerNumPar = 0;
  primerNumPrimo = 0;

  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 1; i <= 10; i++) {
    cout << i << ": ";
    cin >> num;

    if (!primerNumPar && num % 2 == 0) {
      primerNumPar = num;
    }
    if (!primerNumPrimo) {
      contador = 0;
      for (int j = 1; j <= num; j++) {
        if (num % j == 0) {
          contador++;
        }
      }
      if (contador == 2) {
        primerNumPrimo = num;
      }
    }
  }
  cout << endl;

  cout << "Primer numero par: " << primerNumPar << endl;
  cout << "Primer numero primo: " << primerNumPrimo << endl;
  cout << endl;

  return 0;
}