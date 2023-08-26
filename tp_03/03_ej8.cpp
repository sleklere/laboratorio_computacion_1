#include <iostream>
using namespace std;

/*
8
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
determine: El legajo del empleado con mayor sueldo
*/

int main() {
  int legajo, sueldo, mayorSueldo, legajoMayorSueldo;

  cout << "Ingrese el legajo y sueldo de 10 empleados: " << endl;
  for (int i = 1; i <= 10; i++) {
    cout << "Legajo " << i << ": ";
    cin >> legajo;
    cout << "Sueldo " << i << ": ";
    cin >> sueldo;

    if (i == 1) {
      legajoMayorSueldo = legajo;
      mayorSueldo = sueldo;
    }
    if (sueldo > mayorSueldo) {
      mayorSueldo = sueldo;
      legajoMayorSueldo = legajo;
    }
  }

  cout << "El legajo con el mayor sueldo es: " << legajoMayorSueldo << endl;

  return 0;
}