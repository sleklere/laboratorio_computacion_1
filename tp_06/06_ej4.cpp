#include <iostream>
using namespace std;

// numVenta, numDia, importe

int main() {
  int numVenta, numDia, importe, numDiaMayRecaudacion, recaudacionMax;
  int RECAUDACION_DIA[31] = {0};

  cout << "Ingrese numero de venta, dia, e importe: " << endl;
  cin >> numVenta >> numDia >> importe;

  while (numVenta != 0) {
    if (importe > 0) {
      RECAUDACION_DIA[numDia - 1] = importe;
    }

    cout << "Ingrese numero de venta, dia, e importe: " << endl;
    cin >> numVenta >> numDia >> importe;
  }

  numDiaMayRecaudacion = 1;
  recaudacionMax = RECAUDACION_DIA[0];

  for (int i = 1; i < 31; i++) {
    if (RECAUDACION_DIA[i] > recaudacionMax) {
      numDiaMayRecaudacion = i + 1;
      recaudacionMax = RECAUDACION_DIA[i];
    }
  }

  for (int i = 0; i < 31; i++) {
    if (RECAUDACION_DIA[i] > 0) {
      cout << "Recaudacion total dia " << i + 1 << ": " << RECAUDACION_DIA[i]
           << endl;
    }
  }
  cout << "Mayor recaudacion: " << endl;
  cout << "Dia: " << numDiaMayRecaudacion << ", recaudacion: " << recaudacionMax
       << endl;

  return 0;
}