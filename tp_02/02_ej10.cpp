#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, num4, num5, max;

  cout << "Ingrese 5 numeros" << endl;
  cout << "Numero 1: ";
  cin >> num1;
  cout << "Numero 2: ";
  cin >> num2;
  cout << "Numero 3: ";
  cin >> num3;
  cout << "Numero 4: ";
  cin >> num4;
  cout << "Numero 5: ";
  cin >> num5;
  cout << endl;

  if (num1 > num2) {
    max = num1;
  } else {
    max = num2;
  }
  if (num3 > max) {
    max = num3;
  }
  if (num4 > max) {
    max = num4;
  }
  if (num5 > max) {
    max = num5;
  }

  cout << "El maximo es: " << max;
  cout << endl;

  return 0;
}