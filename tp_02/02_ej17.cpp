#include <iostream>
using namespace std;

/*
Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la
siguiente escala: $ 10 por kilovatio (kW) por el consumo hasta los primeros 100
kW de consumo. $ 12 por kW por el consumo excedente de 101 a 200 kW. $ 15 por kW
por el consumo excedente de 201 kW en adelante.

Hacer un programa para que, dado el consumo en kilovatios de un determinado
cliente, el programa calcule e informe el total a pagar por el mismo. Ejemplo 1:
Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550 Ejemplo 2: Un consumo de 125
kW, se calculará: $ 10 x 100 + $ 12 x 25 = $1300. Ejemplo 3: Un consumo de 250
kW, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950.

*/

int main() {
  int consumoKW, importeTotal, precioKW;

  cout << "Ingrese el consumo en kilovatios: ";
  cin >> consumoKW;
  cout << endl;

  importeTotal = 0;

  if (consumoKW > 100) {
    importeTotal += 100 * 10;
    if (consumoKW > 200) {
      importeTotal += 100 * 12 + (consumoKW - 200) * 15;
    } else {
      importeTotal += (consumoKW - 100) * 12;
    }
  } else {
    importeTotal = consumoKW * 10;
  }

  cout << "El importe total a pagar es: "
       << "$" << importeTotal;

  return 0;
}