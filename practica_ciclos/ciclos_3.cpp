#include <iostream>
using namespace std;

int main() {
  int idEspecialidad, facturacionTotal = 0;

  cout << "ID especialidad medica: ";
  cin >> idEspecialidad;
  // La información se encuentra agrupada por especialidad médica pero no está
  // ordenada.
  while (idEspecialidad != 0) {
    int totalDuracionConsultas = 0, promedioDuracionConsulta,
        cantidadConsultas = 0, duracionMaxConsultaLunes = 0,
        horaMaxConsultaLunes, numMaxConsultaLunes = 0, cantConsultasDiurno = 0,
        cantConsultasTarde = 0, cantConsultasNoche = 0, numConsulta = 0,
        duracionConsultaMin, diaSemana, horaDia;
    float porcConsultasDiurno, porcConsultasTarde, porcConsultasNoche;

    cout << "Ingresar la siguiente informacion:" << endl;
    cout << "Numero de consulta medica: ";
    cin >> numConsulta;
    cout << "Duracion de la consulta (minutos): ";
    cin >> duracionConsultaMin;
    cout << "Dia de la semana (1 = lunes, 7 = domingo): ";
    cin >> diaSemana;
    cout << "Hora del dia (0 a 23): ";
    cin >> horaDia;
    cout << endl;

    while (numConsulta >= 0) {
      float facturacionConsulta = 0;

      if (horaDia >= 6 && horaDia <= 13) {
        cantConsultasDiurno++;
      }
      if (horaDia >= 14 && horaDia <= 19) {
        cantConsultasTarde++;
      }
      if (horaDia >= 20 || (horaDia >= 0 && horaDia <= 5)) {
        cantConsultasNoche++;
      }

      if (diaSemana == 1) {
        if (duracionConsultaMin > duracionMaxConsultaLunes) {
          duracionMaxConsultaLunes = duracionConsultaMin;
          numMaxConsultaLunes = numConsulta;
          horaMaxConsultaLunes = horaDia;
        }
      }

      facturacionConsulta += 2000;
      if (duracionConsultaMin > 30) {
        facturacionConsulta += 500;
      }
      if (diaSemana == 6 || diaSemana == 7) {
        facturacionConsulta *= 1.25;
      }
      facturacionTotal += facturacionConsulta;

      totalDuracionConsultas += duracionConsultaMin;
      cantidadConsultas++;

      cout << "Ingresar la siguiente informacion:" << endl;
      cout << "Numero de consulta medica: ";
      cin >> numConsulta;
      cout << "Duracion de la consulta (minutos): ";
      cin >> duracionConsultaMin;
      cout << "Dia de la semana (1 = lunes, 7 = domingo): ";
      cin >> diaSemana;
      cout << "Hora del dia (0 a 23): ";
      cin >> horaDia;
      cout << endl;
    }

    porcConsultasDiurno = cantConsultasDiurno * 100.0 / cantidadConsultas;
    porcConsultasTarde = cantConsultasTarde * 100.0 / cantidadConsultas;
    porcConsultasNoche = cantConsultasNoche * 100.0 / cantidadConsultas;
    promedioDuracionConsulta = totalDuracionConsultas / cantidadConsultas;

    cout << endl;
    cout << "Promedio de duracion de consulta (min): "
         << promedioDuracionConsulta << endl;
    cout << "Consulta mas extensa en el dia Lunes: " << endl;
    cout << "  Duracion(min): " << duracionMaxConsultaLunes << endl;
    cout << "  Hora: " << horaMaxConsultaLunes << endl;
    cout << "  Numero de consulta: " << numMaxConsultaLunes << endl;
    cout << "Porcentaje de consultas segun horario: " << endl;
    cout << "  Diurno: " << porcConsultasDiurno << endl;
    cout << "  Tarde: " << porcConsultasTarde << endl;
    cout << "  Nocturno: " << porcConsultasNoche << endl;
    cout << endl;
    cout << "ID especialidad medica: ";
    cin >> idEspecialidad;
  }
  cout << "Facturacion total de la clinica: " << facturacionTotal << endl;

  return 0;
}