#include <iostream>
using namespace std;

int main() {
	int sem1, sem2, sem3, sem4, recaudacionPromedio;
	float recaudacionMensual, porcSem1, porcSem2, porcSem3, porcSem4;

	// Recaudacion de cada semana
	cout << "Recaudacion por semana" << endl;
	cout << endl;

	cout << "Semana 1: ";
	cin >> sem1;

	cout << "Semana 2: ";
	cin >> sem2;

	cout << "Semana 3: ";
	cin >> sem3;

	cout << "Semana 4: ";
	cin >> sem4;
	cout << "---------";
	cout << endl;

	// Calculo de promedio por semana y porcentaje que representa cada una
	recaudacionMensual = sem1 + sem2 + sem3 + sem4;
	recaudacionPromedio = recaudacionMensual / 4;
	porcSem1 = sem1 * 100 / recaudacionMensual;
	porcSem2 = sem2 * 100 / recaudacionMensual;
	porcSem3 = sem3 * 100 / recaudacionMensual;
	porcSem4 = sem4 * 100 / recaudacionMensual;
	
	// Informe por pantalla
	cout << "Recaudacion del mes: " << recaudacionMensual << endl;
	cout << endl;

	cout << "Recaudacion promedio por semana: " << recaudacionPromedio << endl;
	cout << endl;

	cout << "Porcentaje semana 1: " << "%" << porcSem1 << endl;
	cout << "Porcentaje semana 2: " << "%" << porcSem2 << endl;
	cout << "Porcentaje semana 3: " << "%" << porcSem3 << endl;
	cout << "Porcentaje semana 4: " << "%" << porcSem4 << endl;

	return 0;
}