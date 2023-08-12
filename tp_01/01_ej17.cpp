#include <iostream>
using namespace std;

int main() {
	int numFrascos, mgB, mgP, mgAS;
	// Cada frasco contiene 75 pildoras
	// Cada pildora contiene:
	//				45mg Briancetamol
	//				2grs Pintoxicilina
	//				7mg Acido Simonitico

	// Ingreso de cantidad de frascos
	cout << "Ingresar la cantidad de frascos a elaborar: ";
	cin >> numFrascos;
	cout << endl;

	// Calcular y mostrar cantidad de MILIGRAMOS de cada quimico para elaborar los frascos
	mgB = numFrascos * 75 * 45;
	mgP = numFrascos * 75 * 2000;
	mgAS = numFrascos * 75 * 7;

	cout << "mg para elaborar 1 frasco de 75 pildoras: " << endl;

	cout << "Briancetamol: " << 75 * 45<< endl;
	cout << "Pintoxicilina: " << 75 * 2000 << endl;
	cout << "Acido Simonitico: " << 75 * 7 << endl;

	cout << "-----------" << endl;

	cout << "mg para elaborar " << numFrascos << " frascos" << endl;
	cout << "Briancetamol: " << mgB << endl;
	cout << "Pintoxicilina: " << mgP << endl;
	cout << "Acido Simonitico: " << mgAS << endl;

	return 0;
}