#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, max;

	cout << "Ingresar 3 numeros" << endl;
	cout << "Numero 1: ";
	cin >> num1;
	cout << "Numero 2: ";
	cin >> num2;
	cout << "Numero 3: ";
	cin >> num3;

	max = num1;

	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}

	cout << "El maximo es: " << max << endl;

	return 0;
}