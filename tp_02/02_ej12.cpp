#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, numMedio, numMenor, numMayor;

  cout << "Ingrese 3 numeros" << endl;
  cout << "Numero 1: ";
  cin >> num1;
  cout << "Numero 2: ";
  cin >> num2;
  cout << "Numero 3: ";
  cin >> num3;
  cout << endl;

  // Calcular numero del medio

  /* Primero evaluo 2 de los 3 nums y los asigno segun corresponda a
  las variables numMenor y numMayor que sirven para comparar contra
  el 3 numero para decidir cual es el del medio
  */
  if (num1 < num2) {
    numMenor = num1;
    numMayor = num2;
  } else {
    numMenor = num2;
    numMayor = num1;
  }
  if (num3 > numMenor) {
    if (num3 < numMayor) {
      numMedio = num3;
    } else {
      numMedio = numMayor;
      numMayor = num3;
    }
  } else {
    numMedio = numMenor;
    numMenor = num3;
  }
  cout << "El numero del medio es: " << numMedio;

  return 0;
}