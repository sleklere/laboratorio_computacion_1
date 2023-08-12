#include <iostream>
using namespace std;

int main() {
	char letraMayuscula;
	int diferenciaLetras;

	// Ingresar letra en mayuscula
	cout << "Ingrese una letra en mayusculas: ";
	cin >> letraMayuscula;
	cout << endl;

	// Calcular letras de diferencia con respecto a la 'A'
	diferenciaLetras = (int)letraMayuscula - (int)'A';

	// Informar por pantalla
	cout << "Diferencia de " << diferenciaLetras << " letras con respecto a la 'A'";
	cout << endl;

	return 0;
}