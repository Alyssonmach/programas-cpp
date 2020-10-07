#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

#include "Pessoa.cpp"
#include "Agenda.cpp"

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	Pessoa p;
	
	Agenda salerno(100);
	salerno.setNome("Marcus");
	salerno.setCPF(123456);
	p.setNome("João");
	p.setEndereco("Rua das Flores",333,"Primavera",58000);
	p.setDDD(83);
	p.setTelefone(33331000);

	salerno.setAgenda(p);
	salerno.imprimeAgenda();
	
	salerno.insereNove(83);
	salerno.imprimeAgenda();
	
	return 0;
}