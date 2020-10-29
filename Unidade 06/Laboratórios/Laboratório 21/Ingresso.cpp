#include "Ingresso.h"

Ingresso::Ingresso(float valor)
{
	this -> valor = (valor > 0) ? valor : 0;
}

float Ingresso::imprimeValor(void) const
{
	return valor;
}