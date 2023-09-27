#include <iostream>
using namespace std;

int main() {
  int cantNumPositivos = 0, num;
  int NUMEROS[15];

  cout << "Ingrese 15 numeros enteros: " << endl;
  for (int i = 0; i < 15; i++) {
    cout << "Num " << i + 1 << ": ";
    cin >> NUMEROS[i];
  }

  cout << "Ingrese un numero: ";
  cin >> num;

  for (int i = 0; i < 15; i++) {
    if (NUMEROS[i] == num) {
      cout << "El numero ingresado se encuentra en la lista";
      return 0;
    }
  }
  cout << "El numero ingresado NO se encuentra en la lista";

  return 0;
}