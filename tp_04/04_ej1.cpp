#include <iostream>
using namespace std;

int main() {
  int n, nPositivos, nNegativos;

  nPositivos = 0;
  nNegativos = 0;

  while (n != 0) {
    cout << "Ingrese un número: ";
    cin >> n;

    if (n > 0) {
      nPositivos++;
    }
    if (n < 0) {
      nNegativos++;
    }
  }

  cout << "Cantidad numeros positivos: " << nPositivos << endl;
  cout << "Cantidad numeros negativos: " << nNegativos << endl;

  return 0;
}