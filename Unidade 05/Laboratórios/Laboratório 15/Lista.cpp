#include "Lista.h"

Lista::Lista(int tam)
{
	maxLista = (tam > 0) ? tam : 0;
	ptr = new NomesFuncionarios[maxLista];
	total = 0;
}

void Lista::setLista(NomesFuncionarios nomes)
{
	if(total < maxLista)
	{
		ptr[total] = nomes;
		total++;
	}
}

void Lista::OrdenaAlfabetica(void)
{
	string aux;
	
	for(int i = 0; i < total; i++)
		for(int j = 0; j < total - 1; j++)
			if(ptr[j].nome.compare(ptr[j + 1].nome) == 1)
			{
				aux = ptr[j].nome;
				ptr[j].nome = ptr[j + 1].nome;
				ptr[j + 1].nome = aux;
			}
}

void Lista::imprimeLista(void)
{
	for(int i = 0; i < total; i++)
	{
		cout << ptr[i].nome << endl;
	}
}

Lista::~Lista(void)
{
	delete [] ptr;
	cout << "A lista foi destruida." << endl;
}