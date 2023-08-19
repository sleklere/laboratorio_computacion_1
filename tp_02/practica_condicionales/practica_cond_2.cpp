#include <iostream>
using namespace std;

/*
hacer un programa donde se ingresen 2 numeros enteros y un 3er valor que
represente la operacion a realizar. si 1-suma 2-resta 3-multiplicacion
4-division 5-resto
*/

int main() {
  float n1, n2, resultado;
  int operacion;
  cout << "Ingrese 2 numeros" << endl;
  cout << "Numero 1: ";
  cin >> n1;
  cout << "Numero 2: ";
  cin >> n2;
  cout << endl;
  cout << "Ingrese un numero para la operacion (1 = suma, 2 = resta, 3 = "
          "multiplicacion, 4 = division, 5 = resto)"
       << endl;
  cout << "Numero: ";
  cin >> operacion;
  cout << endl;

  switch (operacion) {
  case 1:
    resultado = n1 + n2;
    break;
  case 2:
    resultado = n1 - n2;
    break;
  case 3:
    resultado = n1 * n2;
    break;
  case 4:
    resultado = n1 / n2;
    break;
  default:
    resultado = (int)n1 % (int)n2;
    break;
  }

  cout << "Resultado: " << resultado << endl;
  cout << endl;

  return 0;
}