#include <iostream>
using namespace std;

int main() {
	float importeOriginal, importeDescuento, porcentajeDescuento;

	// Ingresar importe original e importe con descuento aplicado
	cout << "Ingrese la siguiente informacion" << endl;

	cout << "Importe de venta original: ";
	cin >> importeOriginal;

	cout << "Importe de venta con descuento: ";
	cin >> importeDescuento;
	cout << endl;

	// Calcular e informar que porcentaje de descuento se aplico al precio original
	porcentajeDescuento = (importeOriginal - importeDescuento) * 100 / importeOriginal;
	cout << "Porcentaje de descuento realizado: " << porcentajeDescuento << "%" << endl;

	return 0;
}