#include "Horario.h"
#include "iomanip"
#include <iostream>

using namespace std;

Horario::Horario(int h, int m, int s)
{
	alteraHorario(h, m, s);
}

void Horario::alteraHorario(int h, int m, int s)
{
	hora = (h >= 0 && h < 24) ? h : 0;
	minuto = (m >= 0 && m < 60) ? m : 0;
	segundo = (s >= 0 && s < 60) ? s : 0;
}

void Horario::imprUniv(void)
{
	cout << setfill('0') << setw(2) << hora << ":";
	cout << setw(2) << minuto << ":";
	cout << setw(2) << segundo;
}

void Horario::imprPadr(void)
{
	cout << setfill('0') << setw(2) << ((hora == 0 || hora == 12) ? 12 : hora % 12);
	cout << ":" << setw(2) << minuto << ":";
	cout << setw(2) << segundo << ((hora < 12) ? " AM" : " PM");
}