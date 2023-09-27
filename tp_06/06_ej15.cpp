#include <iostream>
using namespace std;

int main() {
  int ARRAY_1[5], ARRAY_2[10], ARRAY_3[5] = {0};

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

  // loop array 1
  for (int i = 0; i < 5; i++) {
    // cout << ARRAY_1[i] << endl;
    // loop array 2
    for (int j = 0; j < 10; j++) {
      // cout << ARRAY_1[j] << endl;
      if (ARRAY_1[i] == ARRAY_2[j]) {
        ARRAY_3[i] = ARRAY_1[i];
      }
    }
  }

  cout << "Intersecciones: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << ARRAY_3[i] << endl;
  }

  return 0;
}