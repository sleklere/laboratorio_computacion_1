#include <iostream>
using namespace std;

int main() {
  int num1, num2, numMenor, numMayor;
  cout << "Ingrese 2 numeros: " << endl;
  cout << "Numero 1: ";
  cin >> num1;
  cout << "Numero 2: ";
  cin >> num2;

  if (num1 > num2) {
    numMayor = num1;
    numMenor = num2;
  } else {
    numMayor = num2;
    numMenor = num1;
  }

  for (int i = numMenor + 1; i < numMayor; i++) {
    cout << i << " - ";
  }

  return 0;
}