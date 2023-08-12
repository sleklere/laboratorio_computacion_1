#include <iostream>
using namespace std;

int main() {
	int minutosTotales, horas, minutos;
	// Ingresar cantidad de minutos
	cout << "Ingresar minutos totales: ";
	cin >> minutosTotales;
	cout << endl;

	// Calcular horas y minutos
	horas = minutosTotales / 60;
	minutos = minutosTotales % 60;

	// Informar por pantalla
	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;

	return 0;
}