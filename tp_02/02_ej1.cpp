#include <iostream>
using namespace std;

int main() {
	int num;

	cout << endl;
	cout << "Ingrese un numero: ";
	cin >> num;
	cout << endl;

	if (num == 0) {
		cout << "El numero es 0";
	}
	else {
		if (num > 0) {
			cout << "El numero es positivo";
		}
		else {
			cout << "El numero es negativo";
		}
	}

	cout << endl;

	return 0;
}