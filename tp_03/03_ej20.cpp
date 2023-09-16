#include <iostream>
using namespace std;

/*
Se dispone de la información de los últimos 19 partidos del futbolista Diego
Armando Laradona. Por cada partido se registró: Número de partido Minutos
jugados Tarjetas amarillas Tarjetas rojas Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por
número de partido. Se pide calcular e informar: La cantidad de partidos que no
jugó (partidos con minutos igual a cero) La cantidad de partidos que jugó por
completo (minutos >= 90) El promedio de tarjetas recibidas por partido. El
número de partido en el que haya convertido mayor cantidad de goles. Indicar
también los goles convertidos. La mejor racha de partidos convirtiendo goles. Se
debe mostrar la mayor cantidad de partidos consecutivos en los que haya
convertido.

*/

int main() {
  int numPartido, minJugados, tarjAmarillas, tarjRojas, goles,
      partidosNoJugados, partidosCompletos, promedioTarjPorPartido,
      numPartidoMayorGoles, partidosConsecutivosGoles, partidoMayorGolesCant,
      rachaPartidosGoles, rachaActual, totalTarjetas, i;

  partidosNoJugados = 0;
  partidosCompletos = 0;
  totalTarjetas = 0;
  partidoMayorGolesCant = 0;
  numPartidoMayorGoles = 0;
  rachaPartidosGoles = 0;
  rachaActual = 0;

  for (i = 1; i <= 5; i++) {
    cout << "Partido N°" << i << endl;
    cout << "Minutos jugados: ";
    cin >> minJugados;
    cout << "Tarjetas Amarillas: ";
    cin >> tarjAmarillas;
    cout << "Tarjetas Rojas: ";
    cin >> tarjRojas;
    cout << "Goles: ";
    cin >> goles;

    if (minJugados == 0) {
      partidosNoJugados++;
    }
    if (minJugados >= 90) {
      partidosCompletos++;
    }
    if (tarjAmarillas > 0) {
      totalTarjetas += tarjAmarillas;
    }
    if (tarjRojas > 0) {
      totalTarjetas += tarjRojas;
    }
    if (goles > partidoMayorGolesCant) {
      partidoMayorGolesCant = goles;
      numPartidoMayorGoles = i;
    }
    if (goles > 0) {
      rachaActual++;
    } else {
      if (rachaActual > rachaPartidosGoles) {
        rachaPartidosGoles = rachaActual;
        rachaActual = 0;
      }
    }
  }
  cout << endl;

  promedioTarjPorPartido = totalTarjetas / i;

  cout << "Cantidad de partidos no jugados: " << partidosNoJugados << endl;
  cout << "Cantidad de partidos jugados completos: " << partidosCompletos
       << endl;
  cout << "Promedio de tarjetas recibidas por partido: "
       << promedioTarjPorPartido << endl;
  cout << "Numero de partido con mayor cantidad de goles: "
       << numPartidoMayorGoles << "(" << partidoMayorGolesCant << " goles)"
       << endl;
  cout << "Mejor racha de partidos convirtiendo goles: " << rachaPartidosGoles
       << endl;

  return 0;
}