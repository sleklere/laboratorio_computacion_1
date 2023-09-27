#include <iostream>
using namespace std;
/* se dispone de las ventas de un negocio durante el mes pasado. Por cada venta
se registró el número de venta, la forma de pago (1 a 3), el número de día y el
importe de la venta. El fin de la carga de datos se indica con número de venta
igual a 0. Se pide calcular e informar:
  - Por cada día del mes, el total facturado.
  - Los días del mes que no tuvieron ventas.
  - Por cada forma de pago y día, la cantidad de ventas realizadas.
 */

int main() {
  int numVenta, formaPago, dia, importe;
  int recaudacionDias[31];
  int ventas[3][31] = {0};

  int cantidadVentasFormaPagoDia[3][31] = {0};

  cout << "Ingrese: numVenta, formaPago, dia, importe " << endl;
  cin >> numVenta >> formaPago >> dia >> importe;

  while (numVenta != 0) {
    ventas[formaPago - 1][dia - 1] += importe;
    cantidadVentasFormaPagoDia[formaPago - 1][dia - 1]++;

    cout << "Ingrese: numVenta, formaPago, dia, importe " << endl;
    cin >> numVenta >> formaPago >> dia >> importe;
  }

  for (int i = 0; i < 31; i++) {
    int importeDia = 0;
    if (importeDia == 0) {
      cout << "El dia " << i + 1 << " no tuvo ventas";
    } else {
      for (int j = 0; j < 3; j++) {
        importeDia += ventas[j][i];
        cout << "Cantidad ventas dia " << i + 1 << ", formaPago " << j + 1
             << ": " << cantidadVentasFormaPagoDia[j][i] << endl;
      }
      cout << "Importe dia " << i + 1 << ": " << importeDia << endl;
    }
    cout << endl << endl;
  }

  return 0;
}