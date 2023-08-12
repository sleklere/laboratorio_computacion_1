#include <iostream>
using namespace std;

int main() {
	int num1, num2, diferencia;

	cout << "Ingrese un primer numero: ";
	cin >> num1;

	cout << "Ingrse un segundo numero: ";
	cin >> num2;
	
	cout << endl;

	diferencia = num1 - num2;

	if (diferencia < 0) {
		diferencia *= -1;
	}
	
	cout << "La diferencia absoluta es: " << diferencia << endl;

	return 0;
}