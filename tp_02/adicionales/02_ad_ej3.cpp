#include <iostream>
using namespace std;

/*

Una granja dispone de 45 conejos blancos, 50 conejos negros, 40 marrones y 49
grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está
compuesta por: Cantidad de conejos Tipo de conejo (1 - Blanco, 2 - Negro, 3-
Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de conejos vendidos en total.
Cuántos conejos quedaron de cada tipo.
Los tipos de conejos que no se vendieron.

NOTA: Ninguna venta superará los 10 conejos.

*/

int main() {
  // INPUT - 3 ventas (cantidad y tipo de conejos)
  int cantVenta1, cantVenta2, cantVenta3, totalVendidos,
      conejosBlancos = 45, conejosNegros = 50, conejosMarrones = 40,
      conejosGrises = 49;
  string tipoConejoVenta1, tipoConejoVenta2, tipoConejoVenta3;
  bool ventaBlancos, ventaNegros, ventaMarrones, ventaGrises;

  cout << endl;
  cout << "Ingrese la informacion de ventas" << endl;
  cout << endl;
  cout << "Venta 1:" << endl;
  cout << "Cantidad: ";
  cin >> cantVenta1;
  cout << "Tipo: ";
  cin >> tipoConejoVenta1;
  cout << endl;
  cout << "Venta 2:" << endl;
  cout << "Cantidad: ";
  cin >> cantVenta2;
  cout << "Tipo: ";
  cin >> tipoConejoVenta2;
  cout << endl;
  cout << "Venta 3:" << endl;
  cout << "Cantidad: ";
  cin >> cantVenta3;
  cout << "Tipo: ";
  cin >> tipoConejoVenta3;
  cout << endl;

  int CANTIDADES_VENTAS[3] = {cantVenta1, cantVenta2, cantVenta3};
  string TIPOS_VENTAS[3] = {tipoConejoVenta1, tipoConejoVenta2,
                            tipoConejoVenta3};

  // CALCULAR
  // 1. total conejos vendidos
  totalVendidos = cantVenta1 + cantVenta2 + cantVenta3;
  // 2. cantidad de conejos que quedaron de cada tipo
  // 3. que tipos de conejos no se vendieron
  for (int i = 0; i < 3; i++) {
    switch (TIPOS_VENTAS[i][0]) {
    case 'b':
      conejosBlancos -= CANTIDADES_VENTAS[i];
      ventaBlancos = true;
      break;
    case 'n':
      conejosNegros -= CANTIDADES_VENTAS[i];
      ventaNegros = true;
      break;
    case 'm':
      conejosMarrones -= CANTIDADES_VENTAS[i];
      ventaMarrones = true;
      break;
    default:
      conejosGrises -= CANTIDADES_VENTAS[i];
      ventaGrises = true;
      break;
    }
  }

  bool TIPOS_VENDIDOS[4] = {ventaBlancos, ventaNegros, ventaMarrones,
                            ventaGrises};

  // Informe por pantalla
  cout << "-----------------" << endl;
  cout << "Informe de ventas" << endl;
  cout << "-----------------" << endl;
  cout << "Total de conejos vendidos: " << totalVendidos << endl;
  cout << "Cantidad de conejos restantes (por tipo):" << endl;
  cout << " Blancos: " << conejosBlancos << endl;
  cout << " Negros: " << conejosNegros << endl;
  cout << " Marrones: " << conejosMarrones << endl;
  cout << " Grises: " << conejosGrises << endl;
  cout << "Tipos de conejos que no se vendieron:" << endl;

  for (int i = 0; i < 4; i++) {
    if (TIPOS_VENDIDOS[i] == 0) {
      switch (i) {
      case 0:
        cout << "No se vendieron conejos blancos" << endl;
        break;
      case 1:
        cout << "No se vendieron conejos negros" << endl;
        break;
      case 2:
        cout << "No se vendieron conejos marrones" << endl;
        break;
      default:
        cout << "No se vendieron conejos grises" << endl;
        break;
      }
    }
  }

  return 0;
}