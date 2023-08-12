#include <iostream>
using namespace std;

int main() {
	int cantidadHuevos, cajas, huevosSueltos, importe;

	// Ingresar cantidad de huevos a comprar
	cout << "Cantidad de huevos total: ";
	cin >> cantidadHuevos;
	cout << endl;

	// Calcular cuantas cajas y huevos sueltos corresponden
	cajas = cantidadHuevos / 12;
	huevosSueltos = cantidadHuevos % 12;

	// Calcular el importe final (cada caja vale 100 y cada huevo 12)
	importe = cajas * 100 + huevosSueltos * 12;

	// Informar por pantalla
	cout << "Cajas: " << cajas << endl;
	cout << "Huevos sueltos: " << huevosSueltos << endl;
	cout << "---- ";
	cout << "Importe final: " << "$" << importe;
	cout << " ----" << endl;

	return 0;
}