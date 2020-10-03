#include "Funcionario.h"
#include <string>

using std::string;

Funcionario::Funcionario(void)
{
	nome = "Nome Desconhecido";
	salario = 0.0;
	dia = mes = ano = 0;
}

Funcionario::Funcionario(string n, float s, int d, int m, int a)
{
	nome = n;
	salario = s;
	dia = d;
	mes = m;
	ano = a;
}

Funcionario::~Funcionario(void)
{
	delete
}