#include <iostream>
using namespace std;

int main() {
	int minutosTotales, dias, horas, minutos;
	// Ingresar cantidad de minutos
	cout << "Ingresar minutos totales: ";
	cin >> minutosTotales;
	cout << endl;

	// Calcular horas y minutos
	dias = minutosTotales / 60 / 24;
	horas = minutosTotales / 60 % 24;
	minutos = minutosTotales % 60;

	// Informar por pantalla
	cout << "Dias: " << dias << endl;
	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;

	return 0;
}