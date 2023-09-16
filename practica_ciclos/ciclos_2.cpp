#include <iostream>
using namespace std;

/*
Durante la Edad Media existía un popular juego de dados llamado Nomis. El juego
consistía en tirar dos dados de seis caras durante tres rondas. En cada ronda se
debía anotar la diferencia absoluta entre las caras de los dados obtenidos en la
tirada. Esta diferencia absoluta se utiliza para calcular el puntaje a partir de
las siguientes reglas: Si en una ronda se obtienen dos dados con la cara 1 o dos
dados con la cara 6: El puntaje de esa ronda es de 10 puntos. Cualquier
diferencia absoluta mayor a uno: El puntaje de esa ronda es igual a la
diferencia absoluta. Cualquier escalera: El puntaje de la ronda es cero y se
pierde el total acumulado hasta el momento.

Aclaración: Una escalera es cualquiera de las siguientes combinaciones sin
importar el orden de los dados (1-2, 2-3, 3-4, 4-5, 5-6, 1-6)

El juego debe pedir en cada ronda el valor de los dos dados y mostrar el puntaje
de la ronda y el puntaje acumulado. Al finalizar las tres rondas debe mostrar el
puntaje acumulado.

NOTA: El juego Nomis dejó de jugarse masivamente cuando leyeron el nombre del
mismo al revés.

*/

int main() {
  int puntajeAcumulado, puntajeRonda, valorDado1, valorDado2;
  // 2 dados de 6 caras durante 3 rondas
  // diferencia entre dados en cada ronda

  // los 2 dados con cara 1 o 6 = 10 puntos
  // dif > 1 = dif
  // escalera (1-2, 5-4, etc) = 0 y se pierde lo acumulado

  // rondas

  puntajeAcumulado = 0;

  for (int i = 1; i <= 3; i++) {
    cout << "(RONDA " << i << ")" << endl;
    cout << "Valor de los dados: " << endl;
    cout << "Dado 1: ";
    cin >> valorDado1;
    cout << "Dado 2: ";
    cin >> valorDado2;

    if ((valorDado1 == 1 && valorDado2 == 1) ||
        (valorDado1 == 6 && valorDado2 == 6)) {
      puntajeRonda = 10;
    } else {

      if (valorDado1 == (valorDado2 + 1) || (valorDado1 + 1) == valorDado2) {
        puntajeRonda = 0;
        puntajeAcumulado = 0;
      } else {
        if (valorDado1 > valorDado2) {
          puntajeRonda = valorDado1 - valorDado2;
        } else {
          puntajeRonda = valorDado2 - valorDado1;
        }
      }
    }

    puntajeAcumulado += puntajeRonda;

    cout << "Puntaje de la ronda: " << puntajeRonda << endl;
    cout << "Puntaje acumulado: " << puntajeAcumulado << endl;
    cout << endl;
  }
  cout << "Puntaje final acumulado: " << puntajeAcumulado << endl;
  return 0;
}