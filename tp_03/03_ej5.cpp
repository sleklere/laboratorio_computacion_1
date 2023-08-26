#include <iostream>
using namespace std;

int main() {
  int tamanioLista, cantNumPos, num;
  cout << "Ingrese el tamanio de la lista: ";
  cin >> tamanioLista;
  cout << endl;

  cantNumPos = 0;
  for (int i = 1; i <= tamanioLista; i++) {
    cout << "Ingrese un numero (#" << i << "): ";
    cin >> num;
    if (num > 0) {
      cantNumPos++;
    }
  }
  cout << endl;
  cout << "Cantidad de numeros positivos: " << cantNumPos;

  return 0;
}