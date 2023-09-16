#include <iostream>
using namespace std;
/*
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos
durante la semana pasada. Por cada movimiento se registró: Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:

El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.
*/

int main() {
  int numMov, diaMov, importeMov, cantMovDia10, saldoFinalCuenta,
      importeMayorDepo, diaMayorDepo, numMovMayorDepo, cantMovE, cantMovD;
  char tipoMov;
  float porcentajeExtrac, porcentajeDepo;

  cantMovDia10 = 0;
  cantMovD = 0;
  cantMovE = 0;
  saldoFinalCuenta = 0;
  importeMayorDepo = 0;
  cout << "Ingrese la siguiente informacion sobre cada movimiento: " << endl;
  for (int i = 1; i <= 14; i++) {
    cout << "Registro N°" << i << endl;
    // n° movimiento
    cout << "Numero de movimiento: ";
    cin >> numMov;
    // dia
    cout << "Dia del movimiento: ";
    cin >> diaMov;
    // tipo
    cout << "Tipo de movimiento (D | E): ";
    cin >> tipoMov;
    // importe
    cout << "Importe del movimiento: ";
    cin >> importeMov;
    cout << endl;

    if (diaMov == 10) {
      cantMovDia10++;
    }
    if (tipoMov == 'D') {
      cantMovD++;
      saldoFinalCuenta += importeMov;

      if (importeMov > importeMayorDepo) {
        importeMayorDepo = importeMov;
        diaMayorDepo = diaMov;
        numMovMayorDepo = numMov;
      }
    }
    if (tipoMov == 'E') {
      cantMovE++;
      saldoFinalCuenta -= importeMov;
    }
  }
  cout << endl;

  porcentajeDepo = cantMovD * 100 / (cantMovD + cantMovE);
  porcentajeExtrac = cantMovE * 100 / (cantMovD + cantMovE);

  cout << "Saldo final de la cuenta: " << saldoFinalCuenta << endl;
  cout << "Porcentaje de movimientos: " << endl;
  cout << "   Extraccion: " << porcentajeExtrac << endl;
  cout << "   Deposito: " << porcentajeDepo << endl;
  cout << "Mayor deposito: " << endl;
  cout << "   Importe: " << importeMayorDepo << endl;
  cout << "   Dia: " << diaMayorDepo << endl;
  cout << "   N° Movimiento: " << numMovMayorDepo << endl;
  cout << "Cantidad de movimientos dia 10: " << cantMovDia10 << endl;
  cout << endl;

  return 0;
}