// Implementando um programa que simula um rel�gio digital - Relogio.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 11

#include "Relogio.h"

// Definindo um construtor sem par�metros para a classe rel�gio
Relogio::Relogio(void)
{
	hora = minuto = segundo = 0;
}

// M�todo da classe respons�vel por atualizar os valores do rel�gio
void Relogio::setHora(int h, int m, int s)
{
	hora = (h >= 0 && h <= 23) ? h : 0;
	minuto = (m >= 0 && m <= 59) ? m : 0;
	segundo = (s >= 0 && s <= 59) ? s : 0;
}

// M�todo da classe respons�vel por retornar os valores do rel�gio
// Retorno usando passagem por refer�ncia
void Relogio::getHora(int *h, int *m, int *s)
{
	*h = hora;
	*m = minuto;
	*s = segundo;
}

// M�todo da classe respons�vel por passar 1 segundo no rel�gio
void Relogio::passaSegundo(void)
{
	int copia_minuto = minuto;
	
	segundo += (segundo < 59) ? 1 : -segundo;
	minuto = (segundo == 0) ? (minuto + 1) : minuto;
	minuto = (minuto > 59) ? 0 : minuto;
	hora = (minuto == 0 && copia_minuto == 59) ? (hora + 1) : hora;
	hora = (hora > 23) ? 0 : hora; 
}


