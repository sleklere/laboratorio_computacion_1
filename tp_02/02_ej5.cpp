#include <iostream>
using namespace std;

/*
Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5% 
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% 
- Si el importe es mayor a $500 aplicar un descuento del 15% 
Hacer un programa donde se ingresa el importe original sin descuento y 
que se informe por pantalla el importe con el descuento ya aplicado.
*/

int main() {
	int importe;
	float descuento, importeFinal;

	cout << "Ingrese el importe de venta: $";
	cin >> importe;
	cout << endl;

	if (importe < 100) {
		descuento = 0.05;
	}
	else {
		if (importe > 500) {
			descuento = 0.15;
		}
		else {
			descuento = 0.10;
		}
	}

	importeFinal = importe * (1 - descuento);

	cout << "Importe con descuento aplicado: " << "$" << importeFinal << endl;

	return 0;
}