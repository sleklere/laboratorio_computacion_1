#include <iostream>
using namespace std;

int main() {
	int asientosDisponibles, pasajesOcupados;
	float porcentajeOcupacion, porcentajeLibre, totalAsientos;

	// INPUTS
	cout << "Ingresar cantidad de asientos disponibles: ";
	cin >> asientosDisponibles;
	cout << endl;
	cout << "Ingresar cantidad de pasajes ocupados: ";
	cin >> pasajesOcupados;
	cout << endl;
	cout << "---------------------";
	cout << endl << endl;

	// Calcular porcentaje de ocupacion y no ocupacion usando regla del 3 simple
	totalAsientos = asientosDisponibles + pasajesOcupados;
	porcentajeOcupacion = pasajesOcupados * 100 / totalAsientos;
	porcentajeLibre = asientosDisponibles * 100 / totalAsientos;

	// Informar por pantalla
	cout << "Asientos totales: " << totalAsientos;
	cout << endl;
	cout << "Porcentaje de asientos disponibles: " << porcentajeLibre << "%" << endl;
	cout << "Porcentaje de asientos ocupados: " << porcentajeOcupacion << "%" << endl;
	cout << endl;

	return 0;
}