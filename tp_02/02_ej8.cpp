#include <iostream>
using namespace std;

int main() {
	float l1, l2, l3;

	cout << "Ingrese 3 lados:" << endl;
	cout << "Lado 1: ";
	cin >> l1;
	cout << "Lado 2: ";
	cin >> l2;
	cout << "Lado 3: ";
	cin >> l3;

	cout << endl;

	if (l1 == l2) {
		if (l2 == l3) {
			cout << "Equilatero";
		}
		else {
			cout << "Isosceles";
		}
	}
	else {
		if (l1 == l3 || l2 == l3) {
			cout << "Isosceles";
		}
		else {
			cout << "Escaleno";
		}
	}

	cout << endl;

	return 0;
}