#include <iostream>
using namespace std;

int main() {
  int e1, e2, e3, e4, e5, contAltura1 = 0, contAltura2 = 0, contEdad = 0,
                          personasMay30 = 0;
  float a1, a2, a3, a4, a5, sumaAlturas = 0, promAltura;

  cout << "Ingrese la altura (A) y edad (E) de las 5 personas" << endl;
  cout << "A1: ";
  cin >> a1;
  cout << "E1: ";
  cin >> e1;
  cout << endl;
  cout << "A2: ";
  cin >> a2;
  cout << "E2: ";
  cin >> e2;
  cout << endl;
  cout << "A3: ";
  cin >> a3;
  cout << "E3: ";
  cin >> e3;
  cout << endl;
  cout << "A4: ";
  cin >> a4;
  cout << "E4: ";
  cin >> e4;
  cout << endl;
  cout << "A5: ";
  cin >> a5;
  cout << "E5: ";
  cin >> e5;
  cout << endl;

  int EDADES[5] = {e1, e2, e3, e4, e5};
  float ALTURAS[5] = {a1, a2, a3, a4, a5};

  for (int i = 0; i < 5; i++) {
    if (EDADES[i] > 30) {
      personasMay30++;
      // sumo la altura de la persona siendo evaluada para luego calcular el
      // promedio(ALTURAS[2] == a3)
      sumaAlturas += ALTURAS[i];

      // 1. personas > 30 años cuya altura > 1.8m
      if (ALTURAS[i] > 1.8) {
        contAltura1++;
      }
    }
    // 3. numPersonas altura >= 1.7 && altura <= 1.8
    if (ALTURAS[i] >= 1.7 && ALTURAS[i] <= 1.8) {
      contAltura2++;
    }
    // 4. numPersonas edad == 20 || edad == 30 || edad == 40
    if (EDADES[i] == 20 || EDADES[i] == 30 || EDADES[i] == 40) {
      contEdad++;
    }
  }

  // 2. altura promedio personas > 30 años
  promAltura = sumaAlturas / personasMay30;

  // Informe por pantalla
  cout << "-----------" << endl;
  cout << "Resultados:" << endl;
  cout << "-----------" << endl;
  cout << endl;
  cout << "Personas mayores a 30 años que miden mas de 1.8m: " << contAltura1
       << endl;
  cout << "Promedio de altura de personas mayores a 30 años: " << promAltura
       << endl;
  cout << "Cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive): "
       << contAltura2 << endl;
  cout << "Cantidad de personas cuya edad sea de 20, 30 o 40 años: " << contEdad
       << endl;
  cout << endl;

  return 0;
}