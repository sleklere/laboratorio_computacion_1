#include <iostream>
using namespace std;

/*
hacer un programa que solicite el numero del dia de la semana y muestre el
nombre del dia
*/

int main() {
  int numeroDia;
  cout << endl;
  cout << "Ingresar numero del dia: ";
  cin >> numeroDia;
  cout << endl;

  switch (numeroDia) {
  case 1:
    cout << "Lunes";
    break;
  case 2:
    cout << "Martes";
    break;
  case 3:
    cout << "Miercoles";
    break;
  case 4:
    cout << "Jueves";
    break;
  case 5:
    cout << "Viernes";
    break;
  case 6:
    cout << "Sabado";
    break;
  case 7:
    cout << "Domingo";
    break;
  default:
    cout << "No es un dia valido";
    break;
  }
  cout << endl;
  cout << endl;

  return 0;
}