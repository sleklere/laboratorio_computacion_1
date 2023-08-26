#include <iostream>
using namespace std;

/*
7
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

int main() {
  int sueldo, sueldoMax, sueldoMin, sueldoPromedio, totalSueldos,
      cantSueldosMay50000;

  totalSueldos = 0;
  cantSueldosMay50000 = 0;

  cout << "Ingrese el sueldo de 10 empleados: " << endl;
  for (int i = 1; i <= 10; i++) {
    cout << "Sueldo " << i << "/10: ";
    cin >> sueldo;
    totalSueldos += sueldo;
    if (i == 1) {
      sueldoMax = sueldo;
      sueldoMin = sueldo;
    }
    if (sueldo > sueldoMax) {
      sueldoMax = sueldo;
    }
    if (sueldo < sueldoMin) {
      sueldoMin = sueldo;
    }
    if (sueldo > 50000) {
      cantSueldosMay50000++;
    }
  }

  sueldoPromedio = totalSueldos / 10;

  cout << "El sueldo maximo es: " << sueldoMax << endl;
  cout << "El sueldo minimo es: " << sueldoMin << endl;
  cout << "El sueldo promedio es: " << sueldoPromedio << endl;
  cout << "Cantidad de sueldos mayores a 50000: " << cantSueldosMay50000
       << endl;

  return 0;
}