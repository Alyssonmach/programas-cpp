// Implementando um programa que simula uma empresa - mainEmpresa.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 14 

#include <iostream>
#include <locale>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

// Incluindo o cabe�alho das bibliotecas criadas
#include "Funcionario.cpp"
#include "Empresa.cpp"

#define TAM 100
 
// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Inst�ncia ou objetos das classes
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
		
		cout << "Escolha uma op��o:" << endl << endl;
		cout << "1 - Cadastrar um funcion�rio a empresa;" << endl;
		cout << "2 - Dar um aumento aos empregados de um determinado departamento;" << endl;
		cout << "3 - Visualizar dados da empresa;" << endl;
		cout << "4 - Sair do programa;" << endl << endl;
		
		cout << "Insira sua op��o: ";
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
			
			cout << "Nome do novo funcion�rio:";
			getline(cin, nome);
			
			cout << "Salario inicial do funcion�rio: ";
			cin >> salario;
			
			cout << "Dia da Admiss�o: ";
			cin >> dia;
			
			cout << "M�s de Admiss�o: ";
			cin >> mes;
			
			cout << "Ano de Admiss�o: ";
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
			
			cout << endl << "Usu�rio cadastrado com sucesso!" << endl << endl;
			cout << "Limite de Funcion�rios: " << limite << "/" << TAM << endl;
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
			cout << "Entrada Inv�lida! Tente novamente." << endl;
		}
		
		system("pause");
		system("cls");
			
	}while(opcao != 4);
	
	return 0;
}

