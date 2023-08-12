#include <iostream>
using namespace std;

int main() {
	int minTemp, maxTemp, amplitudTermica;

	// Ingresar temperatura maxima y minima
	cout << "Temperatura en San Fernando ayer" << endl;
	cout << "Temperatura maxima: ";
	cin >> maxTemp;
	
	cout << "Temperatura minima: ";
	cin >> minTemp;
	
	cout << endl;

	// Calcular amplitud termica (maxTemp - minTemp)
	amplitudTermica = maxTemp - minTemp;

	// Informar por pantalla
	cout << "Amplitud termica: " << amplitudTermica << " grados" << endl;

	return 0;
}