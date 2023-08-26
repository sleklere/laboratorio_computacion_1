#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores
ingresados, aclarando cual es el máximo y cual el que le sigue. Ejemplo: 10, 8,
12, 14, 3 el resultado será 14 y 12. Ejemplo: 14, 8, 12, 14 ,3 el resultado será
14 y 14. Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4
*/

int main() {
  int num, valorMax1, valorMax2;

  valorMax1 = 0;
  valorMax2 = 0;

  for (int i = 1; i <= 5; i++) {
    cout << "Numero " << i << ": ";
    cin >> num;

    if (!valorMax1) {
      valorMax1 = num;
    }
    if (num > valorMax1) {
      valorMax2 = valorMax1;
      valorMax1 = num;
    } else {
      if (!valorMax2) {
        valorMax2 = num;
      }
      if (num > valorMax2) {
        valorMax2 = num;
      }
    }
  }

  cout << "El maximo 1 es: " << valorMax1 << endl;
  cout << "El maximo 2 es: " << valorMax2 << endl;

  return 0;
}