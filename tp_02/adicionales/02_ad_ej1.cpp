#include <iostream>
using namespace std;

int main() {
  // INPUTS
  int cantHoras, valorHora, costoProyecto;
  char tipoLeng;
  bool esUrgente;
  string nombreLenguaje;

  cout << endl;
  cout << "Ingrese la siguiente informacion sobre el proyecto" << endl;
  cout << "Cantidad de horas: ";
  cin >> cantHoras;
  cout << "Tipo de lenguaje: ";
  cin >> tipoLeng;
  cout << "Es urgente?: ";
  cin >> esUrgente;
  cout << endl;

  // 1. evaluar tipo de lenguaje para calcular valor/hora (switch)
  // 2. formula costo de proyecto -> P = valorHora * cantHoras (no urgente) y P
  // = (valorHora * cantHoras) * 2.2 (urgente - aumento de 120%)

  // 1.
  switch (tipoLeng) {
  case 'C':
    valorHora = 2500;
    nombreLenguaje = "C/C++";
    break;
  case '#':
    valorHora = 2100;
    nombreLenguaje = "C#";
    break;
  case 'P':
    valorHora = 1400;
    nombreLenguaje = "Python";
    break;
  case 'G':
    valorHora = 2000;
    nombreLenguaje = "Go";
    break;
  default:
    cout << "Ingrese un tipo de lenguaje valido" << endl;
    return 0;
  }

  // 2.
  costoProyecto = valorHora * cantHoras;

  if (esUrgente) {
    costoProyecto *= 2.2;
  }

  // Informe por pantalla
  cout << "Informacion del proyecto" << endl;
  cout << "Lenguaje: " << nombreLenguaje << endl;
  cout << "Valor por hora: "
       << "$" << valorHora << endl;
  if (esUrgente) {
    cout << "Es urgente: Si" << endl;
  } else {
    cout << "Es urgente: No" << endl;
  }
  cout << endl;

  cout << "Costo total del proyecto: "
       << "$" << costoProyecto << endl;
  cout << endl;

  return 0;
}