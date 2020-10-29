// Implementa��o de um programa que cadastra usu�rios em laborat�rio - mainLaboratorio.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 19 
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>

using namespace std;

// arquivos de cabe�alho das classes
#include "Usuario.cpp"
#include "Aluno.cpp"
#include "Professor.cpp"

// arquivos de cabe�alho das fun��es
void visualizaAluno(class Aluno);
void visualizaProfessor(class Professor);

// fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, idade, sala;
	string nome, email, matricula, curso, departamento;
	
	Aluno aluno1(" ", " ", 0, " ", " ");
	Professor professor1(" ", " ", 0, " ", 0);
	
	do
	{
		cout << "=== Programa de Registro em Laborat�rio ===" << endl << endl;
		
		cout << "Escolha uma op��o:" << endl;
		cout << "1 - Cadastrar aluno no laborat�rio;" << endl;
		cout << "2 - Visualizar informa��es do aluno;" << endl;
		cout << "3 - Cadastrar professor no laborat�rio;" << endl;
		cout << "4 - Visualizar informa��es do professor;" << endl;
		cout << "5 - Sair do programa;" << endl << endl;
		cout << "Informe sua op��o: ";
		cin >> opcao;
		
		cout << endl << endl;
		
		system("pause");
		system("cls");
		
		if(opcao == 1 || opcao == 3)
		{
			cin.ignore();
			cout << "Informe o nome do usu�rio: ";
			getline(cin, nome);
			cout << "Informe o email do usu�rio: ";
			getline(cin, email);
			cout << "Informe a idade do usu�rio: ";
			cin >> idade;
			
			if(opcao == 1)
			{
				
				cin.ignore();
				cout << "Informe a matr�cula do aluno: ";
				getline(cin, matricula);
				cout << "Informe o curso do aluno: ";
				getline(cin, curso);
				
				Aluno aluno_aux(nome, email, idade, matricula, curso);
				aluno1 = aluno_aux;
			}
			else if(opcao == 3)
			{
				
				cin.ignore();
				cout << "Informe o departamento do professor: ";
				getline(cin, departamento);
				cout << "Informe a sala do professor: ";
				cin >> sala;
				
				Professor professor_aux(nome, email, idade, departamento, sala);
				professor1 = professor_aux;
			}
		}
		else if(opcao == 2 || opcao == 4)
		{
			if(opcao == 2)
			{
				visualizaAluno(aluno1);
			}
			else if(opcao == 4)
			{
				visualizaProfessor(professor1);
			}
		}
		else if(opcao == 5)
		{
			cout << "Programa encerrado." << endl << endl;
		}
		else
		{
			cout << "Entrada Inv�lida, tente novamente." << endl << endl;
		}
		cout << endl << endl;
		
		system("pause");
		system("cls");
		
	}while(opcao != 5);
	return 0;
}

// fun��o respons�vel por mostrar os dados da classe Aluno
void visualizaAluno(Aluno aux)
{
	cout << "=== Dados do Aluno ===" << endl;
	
	cout << "Nome: " << aux.getNome() << endl;
	cout << "Email: " << aux.getEmail() << endl;
	cout << "Idade: " << aux.getIdade() << endl;
	cout << "Matricula: " << aux.getMatricula() << endl;
	cout << "Curso: " << aux.getCurso() << endl;
}

// fun��o respons�vel por mostrar os dados da classe Professor
void visualizaProfessor(Professor aux)
{
	cout << "=== Dados do Professor ===" << endl;
	
	cout << "Nome: " << aux.getNome() << endl;
	cout << "Email: " << aux.getEmail() << endl;
	cout << "Idade: " << aux.getIdade() << endl;
	cout << "Departamento: " << aux.getDepartamento() << endl;
	cout << "Sala: " << aux.getSala() << endl;
}