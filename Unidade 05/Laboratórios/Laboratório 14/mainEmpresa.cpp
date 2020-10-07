// Implementando um programa que simula uma empresa - mainEmpresa.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 14 

#include <iostream>
#include <locale>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

// Incluindo o cabeçalho das bibliotecas criadas
#include "Funcionario.cpp"
#include "Empresa.cpp"

#define TAM 100
 
// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Instância ou objetos das classes
	Empresa emp(TAM);
	Funcionario func;
	
	int limite = 0, opcao;
	long int dadosCNPJ;
	string nomeEmp;
	
	cout << fixed << setprecision(2);
	
	cout << "Programa de Cadastro Empresarial" << endl << endl;
	
	cout << "Informe o nome da sua empresa: ";
	getline(cin, nomeEmp);
	
	emp.setNome(nomeEmp);
	
	cout << "Informe o CNPJ da empresa: ";
	cin >> dadosCNPJ;
	
	emp.setCNPJ(dadosCNPJ);
	
	cout << endl;
	
	system("pause");
	system("cls");
	
	do
	{
		
		cout << "Escolha uma opção:" << endl << endl;
		cout << "1 - Cadastrar um funcionário a empresa;" << endl;
		cout << "2 - Dar um aumento aos empregados de um determinado departamento;" << endl;
		cout << "3 - Visualizar dados da empresa;" << endl;
		cout << "4 - Sair do programa;" << endl << endl;
		
		cout << "Insira sua opção: ";
		cin >> opcao;
		
		cout << endl;
		
		system("pause");
		system("cls");
		
		if(opcao == 1)
		{
			string nome, departamento;
			float salario;
			int dia, mes, ano;
			
			cin.ignore();
			
			cout << "Nome do novo funcionário:";
			getline(cin, nome);
			
			cout << "Salario inicial do funcionário: ";
			cin >> salario;
			
			cout << "Dia da Admissão: ";
			cin >> dia;
			
			cout << "Mês de Admissão: ";
			cin >> mes;
			
			cout << "Ano de Admissão: ";
			cin >> ano;
			
			cin.ignore();
			
			cout << "Departamento de cadastro: ";
			getline(cin, departamento);
			
			func.setNome(nome);
			func.setSalario(salario);
			func.setData(dia, mes, ano);
			func.setDepartamento(departamento);
			
			emp.setEmpresa(func);
			
			limite++;
			
			cout << endl << "Usuário cadastrado com sucesso!" << endl << endl;
			cout << "Limite de Funcionários: " << limite << "/" << TAM << endl;
		}
		else if(opcao == 2)
		{
			string departamento;
			
			cout << "Informe o departamento a receber o aumento de 10%: ";
			cin.ignore();
			getline(cin, departamento);
			
			emp.aumentoDepartamento(departamento);
			
			cout << endl << "Visualize os dados da empresa para ter certeza que o aumento foi realizando!" << endl;
		}
		else if(opcao == 3)
		{
			emp.imprimeEmpresa();
		}
		else if(opcao == 4)
		{
			cout << "Encerrando o processo de cadastro... " << endl;
		}
		else
		{
			cout << "Entrada Inválida! Tente novamente." << endl;
		}
		
		system("pause");
		system("cls");
			
	}while(opcao != 4);
	
	return 0;
}

