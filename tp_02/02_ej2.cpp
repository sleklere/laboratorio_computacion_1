
#include <iostream>
using namespace std;

int main() {
  int num1, num2;

  cout << "Ingrese un numero: ";
  cin >> num1;
  cout << endl;

  cout << "Ingrese otro numero: ";
  cin >> num2;
  cout << endl;

  if (num1 % num2 == 0) {
    cout << "El primer numero SI es mutiplo del segundo";
  } else {
    cout << "El primer numero NO es multiplo del segundo";
  }
  cout << endl;

  return 0;
}