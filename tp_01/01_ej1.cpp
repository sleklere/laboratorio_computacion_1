#include <iostream>;
using namespace std;

int main() {
	int horasTrabajadas;
	float valorHora, sueldo;

	// INPUTS
	// Horas trabajadas
	cout << endl;
	cout << "Ingrese las horas trabajadas: ";
	cin >> horasTrabajadas;
	cout << endl;
	// Valor por hora
	cout << "Ingrese el valor por hora: ";
	cin >> valorHora;
	cout << endl;
	cout << endl;

	// Calcular y listar sueldo
	sueldo = horasTrabajadas * valorHora;
	cout << "Sueldo correspondiente: " << sueldo;
	cout << endl;
	cout << endl;

	return 0;
}