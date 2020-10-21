// Implementação de um programa que simula o registro de empregados - mainEmpregado.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 17 
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <iomanip>
#include <string>

using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << fixed << setprecision(2);
	
	string nome, cpf;
	int numeroSecao;
	float salarioBase, ir;
	
	cout << "=== Programa de Registro de Empregado ===" << endl << endl;
	
	// Objeto ou instância da classe 
	Empregado pupilo;
	
	cout << "Informe o nome do empregado: ";
	getline(cin, nome);
	
	cout << "Informe o cpf do empregado: ";
	getline(cin, cpf);
	
	cout << "Informe o número da seção que o empregado trabalha: ";
	cin >> numeroSecao;
	
	cout << "Informe o salário base desse trabalhador: ";
	cin >> salarioBase;
	
	cout << "informe a taxa [0,1] a ser retida pelo imposto de renda: ";
	cin >> ir;
	
	pupilo.setNome(nome);
	pupilo.setCPF(cpf);
	pupilo.setNumeroSecao(numeroSecao);
	pupilo.setSalarioBase(salarioBase);
	pupilo.setIR(ir);
	
	cout << endl;
	
	pupilo.getDados();
	
	return 0;
}