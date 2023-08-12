#include <iostream>
using namespace std;

int main() {
	float importeVenta, descuento, importeFinal;

	// Ingreso de importe de venta y descuento a aplicar
	cout << "Ingrese la siguiente informacion" << endl;
	cout << "Importe de venta: ";
	cin >> importeVenta;
	cout << "Descuento a aplicar: ";
	cin >> descuento;
	cout << endl;

	// Pasar descuento a decimal
	descuento = descuento / 100;

	// Calcular e informar importe final
	importeFinal = importeVenta * (1 - descuento);
	cout << "-----------";
	cout << " Importe final: " << "$" << importeFinal << " ";
	cout << "-----------";
	cout << endl;

	return 0;
}