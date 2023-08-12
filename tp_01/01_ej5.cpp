#include <iostream>
using namespace std;

int main() {
	int alfajoresA, alfajoresB, alfajoresC;
	float porcentajeA, porcentajeB, porcentajeC, totalAlfajores;

	// Ingreso de cantidad de alfajores vendidos por marca
	cout << "Alfajores vendidios (marca A): ";
	cin >> alfajoresA;
	cout << endl;

	cout << "Alfajores vendidios (marca B): ";
	cin >> alfajoresB;
	cout << endl;

	cout << "Alfajores vendidios (marca C): ";
	cin >> alfajoresC;
	cout << endl;
	cout << "------------" << endl;
	cout << endl;

	// Calcular e informar porcentajes de cada marca
	totalAlfajores = alfajoresA + alfajoresB + alfajoresC;
	porcentajeA = alfajoresA * 100 / totalAlfajores;
	porcentajeB = alfajoresB * 100 / totalAlfajores;
	porcentajeC = alfajoresC * 100 / totalAlfajores;
	cout << "Porcentajes de cada marca" << endl;
	cout << endl;
	cout << "Marca A: " << "%" << porcentajeA << endl;
	cout << endl;
	cout << "Marca B: " << "%" << porcentajeB << endl;
	cout << endl;
	cout << "Marca C: " << "%" << porcentajeC << endl;
	cout << endl;

	return 0;
}