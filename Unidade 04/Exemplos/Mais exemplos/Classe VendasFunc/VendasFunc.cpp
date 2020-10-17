#include <iostream>

#include "VendasFunc.h"

using namespace std;

VendasFunc::VendasFunc(void)
{
	for(int i = 0; i < 12; i++)
	{
		vendas[i] = 0.0;
	}
}

int VendasFunc::setVendas(int mes, double cifra)
{
	if(mes >= 1 && mes <= 12 && cifra > 0)
	{
		vendas[mes - 1] = cifra;
		return 0;
	}
	return 1;
}

void VendasFunc::imprTotalVendas()
{
	cout << "O total de vendas durante o ano é: " << totalVendas() << " R$" << endl;
}

double VendasFunc::totalVendas()
{
	double total = 0.0;
	
	for(int i = 0; i < 12; i++)
	{
		total += vendas[i];
	}
	
	return total;
}