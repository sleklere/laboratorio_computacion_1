#include <iostream>
using namespace std;

int main() {
  int cantNumPositivos = 0, min, repeticionesMin = 0;
  int NUMEROS[15];

  cout << "Ingrese 15 numeros enteros: " << endl;
  for (int i = 0; i < 15; i++) {
    cout << "Num " << i + 1 << ": ";
    cin >> NUMEROS[i];
  }

  min = NUMEROS[0];

  for (int i = 1; i < 15; i++) {
    if (NUMEROS[i] < min) {
      min = NUMEROS[i];
    }
  }

  for (int i = 0; i < 15; i++) {
    if (NUMEROS[i] == min) {
      repeticionesMin++;
    }
  }
  cout << "El minimo es: " << min << endl;
  cout << "Aparece " << repeticionesMin << " veces en el array" << endl;

  return 0;
}