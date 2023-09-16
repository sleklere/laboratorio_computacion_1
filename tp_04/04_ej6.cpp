#include <iostream>
using namespace std;

int main() {
  int cantNumPar = 0, num, ultNum, cantTernas = 0, numNegConsecutivos = 0;
  bool primeraVuelta = true;

  cout << "Ingrese un numero: ";
  cin >> num;
  if (num % 2 == 0) {
    cantNumPar++;
  }

  while (cantNumPar < 5) {

    if (!primeraVuelta && num < 0 && ultNum < 0) {
      numNegConsecutivos++;
      cout << "NUM NEG CONSECUTIVOS: " << numNegConsecutivos << endl;
    } else {
      primeraVuelta = false;
    }

    if (ultNum < 0 && num >= 0 && numNegConsecutivos > 0) {
      cantTernas++;
      cout << "CANT TERNAS: " << cantTernas << endl;
      numNegConsecutivos = 0;
    }

    ultNum = num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
      cantNumPar++;
    }
  }
  if (ultNum < 0 && num < 0 ||
      ultNum < 0 && num >= 0 && numNegConsecutivos > 0) {
    cantTernas++;
  }

  cout << endl;
  cout << "Cantidad de ternas: " << cantTernas << endl;

  return 0;
}