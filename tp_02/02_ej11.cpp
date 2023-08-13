#include <iostream>
using namespace std;

int main() {
  int contador, n1, n2, n3, n4, n5;

  cout << "Ingrese 5 numeros" << endl;
  cout << "Numero 1: ";
  cin >> n1;
  cout << "Numero 2: ";
  cin >> n2;
  cout << "Numero 3: ";
  cin >> n3;
  cout << "Numero 4: ";
  cin >> n4;
  cout << "Numero 5: ";
  cin >> n5;

  contador = 0;

  if (n1 > 0) {
    contador++;
  }
  if (n2 > 0) {
    contador++;
  }
  if (n3 > 0) {
    contador++;
  }
  if (n4 > 0) {
    contador++;
  }
  if (n5 > 0) {
    contador++;
  }

  cout << contador << " numeros son positivos";

  return 0;
}