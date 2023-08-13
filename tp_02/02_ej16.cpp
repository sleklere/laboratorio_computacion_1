#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado cuatro números. Si los valores que
se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto
Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”. Ejemplo 1:
si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están
ordenados. Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14,
entonces están desordenados.

*/

int main() {
  int n1, n2, n3, n4;

  cout << "Ingrese 4 numeros" << endl;
  cout << "Numero 1: ";
  cin >> n1;
  cout << "Numero 2: ";
  cin >> n2;
  cout << "Numero 3: ";
  cin >> n3;
  cout << "Numero 4: ";
  cin >> n4;
  cout << endl;

  if (n1 <= n2 && n2 <= n3 && n3 <= n4) {
    cout << "Conjunto Ordenado";
  } else {
    cout << "Conjunto Desordenado";
  }
  cout << endl;

  return 0;
}