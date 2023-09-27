#include <iostream>
using namespace std;

int main() {
  int ARRAY_1[5], ARRAY_2[10], ARRAY_3[15];

  cout << "Ingrese 5 numeros: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Num" << i + 1 << ": ";
    cin >> ARRAY_1[i];
  }

  cout << "Ingrese 10 numeros: " << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Num" << i + 1 << ": ";
    cin >> ARRAY_2[i];
  }

  for (int i = 0; i < 15; i++) {
    if (i < 5) {
      ARRAY_3[i] = ARRAY_1[i];
    } else {
      ARRAY_3[i] = ARRAY_2[i - 5];
    }
  }

  cout << "Array 3: " << endl;
  for (int i = 0; i < 15; i++) {
    cout << ARRAY_3[i] << endl;
  }

  return 0;
}