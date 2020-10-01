// Usando static para retornar total de objetos - Abelha.cpp

#include "Abelha.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Abelha::Abelha(void)
{
	nome_abelha = "Nome Desconhecido";
	total_abelha++;
}

Abelha::Abelha(string nome)
{
	nome_abelha = nome;
	total_abelha++;
}

string Abelha::nome(void)
{
	return nome_abelha;
}

void Abelha::setNome(string nome)
{
	nome_abelha = nome;
}
		
int Abelha::total_abelha = 0;

Abelha::~Abelha(void)
{
	total_abelha--;
	cout << "Objeto Destruido" << endl;
}
