#include "Agenda.h"

Agenda::Agenda(int tam)
{
	maxLista = tam > 0 ? tam : 0;
	ptr = new Pessoa[maxLista];
	t = 0;
}

void Agenda::setNome(string nome)
{
	this -> nome = nome;
}

void Agenda::setCPF(long int cpf)
{
	this -> CPF = cpf;
}

void Agenda::setAgenda(Pessoa p)
{
	if(t < maxLista)
	{
		ptr[t] = p;
		t++;
	}
}

void Agenda::insereNove(int dddProc)
{
	for(int i = 0; i < t; i++)
	{
		if(ptr[i].getDDD() == dddProc)
		{
			ptr[i].setTelefone(ptr[i].getTelefone() + 900000000);
		}
	}
}

string Agenda::getNome(void) const
{
	return nome;
}

long int Agenda::getCPF(void) const
{
	return CPF;
}

void Agenda::imprimeAgenda(void) const
{
	cout << "Dono da Agenda: " << nome << endl;
	cout << "CPF: " << CPF << endl << endl;
	
	cout << "Nome / Endereço / DDD / Telefone" << endl << endl;
	
	for(int i = 0; i < t; i++)
	{
		cout << ptr[i].getNome() << endl;
		Endereco aux = ptr[i].getEndereco();
		cout << aux.rua << " " << aux.numero << " " << aux.bairro << " " << aux.CEP << endl;
		cout << ptr[i].getDDD() << " " << ptr[i].getTelefone() << endl;
	}
	cout << endl;
}

Agenda::~Agenda()
{
	delete [] ptr;
}