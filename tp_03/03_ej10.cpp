#include <iostream>
using namespace std;

/*
Dada una lista de 7 números informar cual es el primer y segundo número impar
ingresado. Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.
*/

int main() {
  int num, impar1, impar2;

  impar1 = 0;
  impar2 = 0;

  cout << "Ingrese 7 numeros: " << endl;
  for (int i = 1; i <= 7; i++) {
    cout << "Numero " << i << ": ";
    cin >> num;

    if ((num % 2) != 0) {
      if (!impar1) {
        impar1 = num;
      } else {
        if (!impar2) {
          impar2 = num;
        }
      }
    }
  }
  cout << "Primer numero impar: " << impar1 << endl;
  cout << "Segundo numero impar: " << impar2 << endl;

  return 0;
}