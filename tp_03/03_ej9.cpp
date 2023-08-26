#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista 10 números e informar el máximo de los
negativos y el mínimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8,
-3, 24. Máximo Negativo: -3. Mínimo Positivo: 2.

*/

int main() {
  int num, maxNegativos, minPositivos;

  maxNegativos = 0;
  minPositivos = 0;

  for (int i = 1; i <= 10; i++) {
    cout << "Numero " << i << "/10: ";
    cin >> num;

    if (!maxNegativos && num < 0) {
      maxNegativos = num;
    }
    if (!minPositivos && num > 0) {
      minPositivos = num;
    }

    if (num < 0 && num > maxNegativos) {
      maxNegativos = num;
    }
    if (num > 0 && num < minPositivos) {
      minPositivos = num;
    }
  }

  cout << endl;
  cout << "Maximo de los negativos: " << maxNegativos << endl;
  cout << "Minimo de los positivos: " << minPositivos << endl;

  return 0;
}