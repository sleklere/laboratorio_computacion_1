#include <iostream>
using namespace std;
/*
hacer un programa donde se cargue una lista de numeros enteros que finaliza
cuando se ingresa el tercer numero par. informar el promedio de numeros
ingresados
*/

int main() {
  int num, cantNumsPar, total, promedio, iteraciones;

  cantNumsPar = 0;
  total = 0;
  iteraciones = 0;
  while (cantNumsPar < 3) {
    iteraciones++;
    cout << "Ingrese un numero: ";
    cin >> num;

    total += num;

    if (num % 2 == 0) {
      cantNumsPar++;
    }
  }

  promedio = total / iteraciones;

  cout << "Promedio de numeros ingresados: " << promedio;

  return 0;
}
