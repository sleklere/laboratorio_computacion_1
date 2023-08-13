#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3, n4, contP, contA;

  cout << "Ingrese las 4 notas de los examenes" << endl;
  cout << endl;
  cout << "Nota 1: ";
  cin >> n1;
  cout << "Nota 2: ";
  cin >> n2;
  cout << "Nota 3: ";
  cin >> n3;
  cout << "Nota 4: ";
  cin >> n4;
  cout << endl;

  contP = 0;
  contA = 0;

  if (n1 >= 7) {
    contP++;
    contA++;
  } else {
    if (n1 >= 4) {
      contA++;
    }
  }
  if (n2 >= 7) {
    contP++;
    contA++;
  } else {
    if (n2 >= 4) {
      contA++;
    }
  }
  if (n3 >= 7) {
    contP++;
    contA++;
  } else {
    if (n3 >= 4) {
      contA++;
    }
  }
  if (n4 >= 7) {
    contP++;
    contA++;
  } else {
    if (n4 >= 4) {
      contA++;
    }
  }

  if (contP == 4) {
    cout << "Promociona" << endl;
  } else {
    if (contA >= 3) {
      cout << "Final" << endl;
    } else {
      if (contA >= 1) {
        cout << "Recupera parciales" << endl;
      } else {
        cout << "Recursa la materia" << endl;
      }
    }
  }

  return 0;
}