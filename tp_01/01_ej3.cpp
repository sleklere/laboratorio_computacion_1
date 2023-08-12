#include <iostream>
using namespace std;

int main() {
	int autosVendidos, sueldo;

	// INPUT - Cantidad de autos vendidos
	cout << "Ingresar cantidad de autos vendidos: ";
	cin >> autosVendidos;
	cout << endl;

	// Calcular sueldo total
	sueldo = 15000 + 2000 * autosVendidos;
	cout << "Sueldo total a pagar: " << sueldo;
	cout << endl;

	return 0;
}