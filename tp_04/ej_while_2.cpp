#include <iostream>
using namespace std;

/*
el famoso influencer santi laratea decidio hacer una colecta de dinero para
pagar la deuda de 550000 de una institucion. para ello le pidio a sus seguidores
que donen el dinero que les sea psobile. utilizo un sistema que aceptaba
donacines hasta que se cubriera el monto de la deuda.

hacer un programa que emule dicho sistema. el programa debe indicar la cantidad
de donaciones
*/

int main() {
  int cantidadDonaciones;
  float donacion, totalDonaciones;

  totalDonaciones = 0;
  cantidadDonaciones = 0;
  while (totalDonaciones < 550000) {
    cout << "Ingrese su donacion: ";
    cin >> donacion;

    cantidadDonaciones++;
    totalDonaciones += donacion;
  }
  cout << endl;

  cout << "Cantidad de donaciones: " << cantidadDonaciones << endl;

  return 0;
}