#include <iostream>;
using namespace std;

int main() {
	int nA, nB, temp;
	// INPUTS
	// Horas trabajadas
	cout << endl;
	cout << "Ingrese un numero (A): ";
	cin >> nA;
	cout << endl;
	// Valor por hora
	cout << "Ingrese un numero (B): ";
	cin >> nB;
	cout << endl;
	cout << endl;

	// Calcular y listar sueldo
	cout << "Intercambiando numeros...\n";
	temp = nA;
	nA = nB;
	nB = temp;
	cout << "Numero A: " << nA << endl << "Numero B: " << nB;
	cout << endl;
	cout << endl;

	return 0;
}