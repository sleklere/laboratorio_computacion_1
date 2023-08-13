#include <iostream>
using namespace std;

int main() {
  int dNac, mNac, aNac, dAct, mAct, aAct;

  cout << "Ingrese su fecha de nacimiento por dia, mes, año" << endl;
  cout << "Dia: ";
  cin >> dNac;
  cout << "Mes: ";
  cin >> mNac;
  cout << "Año: ";
  cin >> aNac;
  cout << endl;

  cout << "Ingrese la fecha actual por dia, mes, año" << endl;
  cout << "Dia: ";
  cin >> dAct;
  cout << "Mes: ";
  cin >> mAct;
  cout << "Año: ";
  cin >> aAct;
  cout << endl;

  if (dAct >= dNac && mAct >= mNac && aAct >= aNac) {
    cout << "La edad actual es de " << aAct - aNac << " años";
  } else {
    cout << "La edad actual es de " << aAct - aNac - 1 << " años";
  }

  return 0;
}