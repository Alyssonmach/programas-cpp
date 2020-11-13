#include "Pessoa.h"

Pessoa::Pessoa()
{
  this -> nome = " ";
  this -> cpf = " ";
  this -> idade = 0;
  this -> peso = 0.0;
}

Pessoa::Pessoa(string nome, string cpf, short idade,
               float peso)
{
  this -> nome = nome;
  this -> cpf = cpf;
  this -> idade = idade;
  this -> peso = peso;
}

void Pessoa::setNome(string nome)
{
  this -> nome = nome;
}

void Pessoa:setCPF(string cpf)
{
  this -> cpf = cpf;
}

void Pessoa::setIdade(short idade)
{
  this->idade = idade;
}

void Pessoa::setPeso(float peso)
{
  this->peso = peso;
}

string Pessoa::getNome(void) const
{
  return nome;
}

string Pessoa::getCPF(void) const
{
  return cpf;
}

short Pessoa::getIdade(void) const
{
  return idade;
}

float Pessoa::getPeso(void) const
{
  return peso;
}

void Pessoa::imprimeDados(void) const
{
  cout << "Nome: " << getNome() << endl;
  cout << "CPF: " << getCPF() << endl;
  cout << "Idade: " << getIdade() << endl;
  cout << "Peso: " << getPeso() << endl;
}
