#include <iostream>
using namespace std;

int main() {
	int numero;

	cout << "Ingrese un numero: ";
	cin >> numero;
	cout << endl;

	if (numero % 2 == 0) {
		cout << "El numero es par";
	}
	else {
		cout << "El numero es impar";
	}
	cout << endl;

	return 0;
}