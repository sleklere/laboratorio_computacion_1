#include <iostream>
using namespace std;

/*
hacer un programa que solicite al usuario 4 numeros y luego muestre un mensaje
con la leyenda de "son todos positivos" cuando todos los numeros sean positivos,
"hay algun positivo" cuando algunos de los numeros son positivos, "no hay
ninguno" cuando ninguno de los numeros son positivos.
*/

int main() {
  float n1, n2, n3, n4;
  int contador;

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

  contador = 0;

  if (n1 > 0) {
    contador++;
  }
  if (n2 > 0) {
    contador++;
  }
  if (n3 > 0) {
    contador++;
  }
  if (n4 > 0) {
    contador++;
  }

  if (contador == 4) {
    cout << "Todos los numeros son positivos" << endl;
  } else {
    if (contador >= 1) {
      cout << "Algunos numeros son positivos" << endl;
    } else {
      cout << "Ningun numero es positivo" << endl;
    }
  }
  cout << endl;

  return 0;
}
