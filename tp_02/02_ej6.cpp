#include <iostream>
using namespace std;

int main() {
	float num1, num2, num3;

	cout << "Ingrese 3 numeros:" << endl;
	cout << "Numero 1: ";
	cin >> num1;
	cout << "Numero 2: ";
	cin >> num2;
	cout << "Numero 3: ";
	cin >> num3;

	if (num1 == num2 && num2 == num3) {
		cout << "Los 3 numeros son iguales";
	}

	cout << endl;

	return 0;
}