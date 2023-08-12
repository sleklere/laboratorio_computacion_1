#include <iostream>
using namespace std;

int main() {
	int importe, b1000, b500, b200, b100;

	// Ingresar el importe a retirar
	cout << "Ingrese el importe a retirar: ";
	cin >> importe;
	cout << endl;

	// Calcular billetes correspondientes
	b1000 = importe / 1000;
	b500 = importe % 1000 / 500;
	b200 = importe % 1000 % 500 / 200;
	b100 = importe % 1000 % 500 % 200 / 100;

	// Informar por pantalla que billetes seran entregados
	cout << "Billetes a entregar: " << endl;
	cout << "1000: " << b1000 << endl;
	cout << "500: " << b500 << endl;
	cout << "200: " << b200 << endl;
	cout << "100: " << b100 << endl;

	return 0;
}