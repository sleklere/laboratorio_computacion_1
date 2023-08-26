#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Ingrese un numero positivo: ";
  cin >> num;
  cout << endl;

  for (int i = 2; i < num; i++) {
    cout << i << " - ";
  }

  return 0;
}