#include <iostream>
using namespace std;

/*
Una estación meteorológica registró una muestra climática de los últimos 15
días. Por cada día registró: Número de día (entero) Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se
pide calcular e informar:
El número de día que se haya registrado la temperatura
máxima.
La amplitud térmica de todo el período. La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
Mostrar "Quincena húmeda" si llovió al menos un tercio de los días. De lo
contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

int main() {
  int numDia, cantDiasNeblina, numDiaMaxTemperatura, cantDiasLluvia;
  float temperaturaDia, mmLluviaDia, visibilidadKmDia, amplitudTermica,
      temperaturaMaxima, temperaturaMinima;

  numDiaMaxTemperatura = 0;
  temperaturaMaxima = 0;
  temperaturaMinima = 0;
  cantDiasNeblina = 0;
  cantDiasLluvia = 0;

  for (int i = 1; i <= 15; i++) {
    cout << "Registro del dia " << i << ":" << endl;
    numDia = i;
    cout << "Temperatura: ";
    cin >> temperaturaDia;
    cout << "Milimetros de lluvia: ";
    cin >> mmLluviaDia;
    cout << "Visibilidad en km: ";
    cin >> visibilidadKmDia;

    // establezco el primer valor de la temp max y min para poder comparar
    if (!temperaturaMinima) {
      temperaturaMinima = temperaturaDia;
    }
    if (!temperaturaMaxima) {
      temperaturaMaxima = temperaturaDia;
    }

    if (temperaturaDia > temperaturaMaxima) {
      temperaturaMaxima = temperaturaDia;
      numDiaMaxTemperatura = numDia;
    }
    if (temperaturaDia < temperaturaMinima) {
      temperaturaMinima = temperaturaDia;
    }

    if (visibilidadKmDia < 2) {
      cantDiasNeblina++;
    }

    if (mmLluviaDia > 0) {
      cantDiasLluvia++;
    }
  }

  amplitudTermica = temperaturaMaxima - temperaturaMinima;

  if (cantDiasLluvia >= 8) {
    cout << "Quincena lluviosa" << endl;
  } else {
    if (cantDiasLluvia >= 5) {
      cout << "Quincena humeda" << endl;
    } else {
      cout << "Quincena seca" << endl;
    }
  }
  cout << "La amplitud termica fue: " << amplitudTermica << " grados" << endl;
  cout << "Numero del dia con temperatura maxima registrada: "
       << numDiaMaxTemperatura << endl;
  cout << "Cantidad de dias con neblina: " << cantDiasNeblina << endl;

  return 0;
}