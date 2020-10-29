#include "VIP.h"

VIP::VIP(float valor, float valor_adicional) : Ingresso(valor)
{
	this -> valor_adicional = (valor_adicional > 0) ? valor_adicional : 0;
}

float VIP::imprimeValor(void) const
{
	return (imprimeValor() + valor_adicional);
}

