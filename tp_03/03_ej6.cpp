#include <iostream>
using namespace std;

int main() {
  int numPositivos, numNegativos, numIgualCero, num;

  numPositivos = 0;
  numNegativos = 0;
  numIgualCero = 0;

  for (int i = 1; i <= 10; i++) {
    num = 0;
    cout << "Ingrese un numero (" << i << "/10): ";
    cin >> num;
    if (num > 0) {
      numPositivos++;
    } else {
      if (num < 0) {
        numNegativos++;
      } else {
        numIgualCero++;
      }
    }
  }

  cout << endl;
  cout << "Cantidad de numeros positivos: " << numPositivos << endl;
  cout << "Cantidad de numeros negativos: " << numNegativos << endl;
  cout << "Cantidad de numeros iguales a 0: " << numIgualCero << endl;

  return 0;
}