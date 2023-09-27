#include <iostream>
using namespace std;

int main() {
  int cantNumPositivos = 0;
  int NUMEROS[10];

  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Num " << i + 1 << ": ";
    cin >> NUMEROS[i];

    if (NUMEROS[i] > 0) {
      cantNumPositivos++;
    }
  }
  cout << "Cantidad de numeros positivos: " << cantNumPositivos << endl;
  return 0;
}