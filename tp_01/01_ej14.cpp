#include <iostream>
using namespace std;

int main() {
	float importeOriginal, descuento, importeFinal, descuentoAplicado;

	// Ingresar importe de compra y descuento a aplicar
	cout << "Importe original: ";
	cin >> importeOriginal;

	cout << "Descuento a aplicar: ";
	cin >> descuento;

	cout << endl;

	// Calcular importe final, descuento aplicado (en $)
	descuento /= 100; // descuento pasado a decimales para facilitar calculos
	descuentoAplicado = importeOriginal * descuento;
	importeFinal = importeOriginal - descuentoAplicado;

	// Informar por pantalla
	cout << "Importe: " << importeOriginal << endl;
	cout << "Descuento: " << descuentoAplicado << endl;
	cout << "---------" << endl;
	cout << "Total: " << importeFinal << endl;

	return 0;
}