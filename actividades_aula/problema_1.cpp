#include <iostream>
using namespace std;

int main() {
  int num, digito, numDigitosPares = 0;

  cout << "Ingrese un numero: ";
  cin >> num;

  int div = 10;
  // calcular cantidad de digitos
  int numDigitos = 1;
  while (num / div > 0) {
    if (num / div > 0) {
      numDigitos++;
    }
    div *= 10;
  }

  // calcular divisor para sacar el primer digito y el resto despues
  div = 1;
  for (int i = 0; i < numDigitos; i++) {
    div *= 10;
  }

  // mostrar los digitos
  for (int i = 0; i < numDigitos; i++) {
    int digito = num % div / (div / 10);
    if (digito % 2 == 0) {
      numDigitosPares++;
    }
    cout << digito << endl;
    div /= 10;
  }
  // cout << "Cantidad de digitos: " << digitos << endl;
  if (numDigitosPares == numDigitos) {
    cout << "Todos los digitos son pares" << endl;
  } else {
    cout << "No todos los digitos son pares" << endl;
  }

  return 0;
}

// int main() {
//   string numero;

//   cout << "Ingrse numero: ";
//   cin >> numero;

//   // for each en c++
//   for (char digito : numero) {
//     cout << digito << endl;
//   }

//   return 0;
// }