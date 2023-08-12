#include <iostream>
using namespace std;

int main() {
	int horasTotales, dias, horas;
	// Ingresar cantidad de horas
	cout << "Ingresar horas totales: ";
	cin >> horasTotales;
	cout << endl;

	// Calcular dias y horas
	dias = horasTotales / 24;
	horas = horasTotales % 24;

	// Informar por pantalla
	cout << "Dias: " << dias << endl;
	cout << "Horas: " << horas << endl;

	return 0;
}