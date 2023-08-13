#include <iostream>
using namespace std;
/*
Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
siguientes costos: Costo de alquiler de $10000 Costo por caramelo producido de
$0.5 Costo por mantenimiento cada 1000 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
mes, informar: "El presupuesto es suficiente para cubrir los costos de $XXXX"
"El presupuesto no es suficiente, necesita un crédito de $XXXX"

*/

int main() {
  const int costoAlquiler = 10000;
  const float costoCaramelo = 0.5;
  // costo mantenimiento cada 1000 caramelos 5000
  int presupuestoInicial, caramelosMes1, costoMantenimiento;
  float costoTotal;

  cout << endl;
  cout << "Presupuesto inicial: ";
  cin >> presupuestoInicial;
  cout << "Caramelos a producir el primer mes: ";
  cin >> caramelosMes1;
  cout << endl;

  costoTotal = costoAlquiler + caramelosMes1 * costoCaramelo +
               (caramelosMes1 / 1000) * 5000;

  if (presupuestoInicial >= costoTotal) {
    cout << "El presupuesto es suficiente para cubrir los costos de $"
         << costoTotal << endl;
  } else {
    cout << "El presupuesto no es suficiente, necesita un credito de $"
         << costoTotal - presupuestoInicial << endl;
  }
  cout << endl;

  return 0;
}