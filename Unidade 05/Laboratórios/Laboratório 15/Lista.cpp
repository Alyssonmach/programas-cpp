// Implementando um programa Cria e Ordena uma lista de nomes - Lista.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 15

#include "Lista.h"

// Implementado o construtor da classe
Lista::Lista(int tam)
{
	maxLista = (tam > 0) ? tam : 0;
	ptr = new NomesFuncionarios[maxLista];
	total = 0;
}

// Configurando a lista de nomes
void Lista::setLista(NomesFuncionarios nomes)
{
	if(total < maxLista)
	{
		ptr[total] = nomes;
		total++;
	}
}

// Ordenando a lista de nomes em ordem alfabética (Ordenação Bolha + métodos da classe string)
void Lista::OrdenaAlfabetica(void)
{
	string aux;
	
	for(int i(1); i < total; i++)
		for(int j(0); j < total - i; j++)
			if(ptr[j].nome.compare(ptr[j + 1].nome) == 1)
			{
				aux = ptr[j].nome;
				ptr[j].nome = ptr[j + 1].nome;
				ptr[j + 1].nome = aux;
			}
}

// Método responsável por imprimir a lista de nomes para o usuário
void Lista::imprimeLista(void)
{
	for(int i = 0; i < total; i++)
	{
		cout << ptr[i].nome << endl;
	}
}

// Definindo um destrutor para a classe
Lista::~Lista(void)
{
	delete [] ptr;
	cout << "O cache da lista foi removido." << endl;
}