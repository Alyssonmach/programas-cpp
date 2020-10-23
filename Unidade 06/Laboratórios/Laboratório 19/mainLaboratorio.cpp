// Implementação de um programa que cadastra usuários em laboratório - mainLaboratorio.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>

using namespace std;

// arquivos de cabeçalho das classes
#include "Usuario.cpp"
#include "Aluno.cpp"
#include "Professor.cpp"

// arquivos de cabeçalho das funções
void visualizaAluno(class Aluno);
void visualizaProfessor(class Professor);

// função principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, idade, sala;
	string nome, email, matricula, curso, departamento;
	
	Aluno aluno1(" ", " ", 0, " ", " ");
	Professor professor1(" ", " ", 0, " ", 0);
	
	do
	{
		cout << "=== Programa de Registro em Laboratório ===" << endl << endl;
		
		cout << "Escolha uma opção:" << endl;
		cout << "1 - Cadastrar aluno no laboratório;" << endl;
		cout << "2 - Visualizar informações do aluno;" << endl;
		cout << "3 - Cadastrar professor no laboratório;" << endl;
		cout << "4 - Visualizar informações do professor;" << endl;
		cout << "5 - Sair do programa;" << endl << endl;
		cout << "Informe sua opção: ";
		cin >> opcao;
		
		cout << endl << endl;
		
		system("pause");
		system("cls");
		
		if(opcao == 1 || opcao == 3)
		{
			cin.ignore();
			cout << "Informe o nome do usuário: ";
			getline(cin, nome);
			cout << "Informe o email do usuário: ";
			getline(cin, email);
			cout << "Informe a idade do usuário: ";
			cin >> idade;
			
			if(opcao == 1)
			{
				
				cin.ignore();
				cout << "Informe a matrícula do aluno: ";
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
			cout << "Entrada Inválida, tente novamente." << endl << endl;
		}
		cout << endl << endl;
		
		system("pause");
		system("cls");
		
	}while(opcao != 5);
	return 0;
}

// função responsável por mostrar os dados da classe Aluno
void visualizaAluno(Aluno aux)
{
	cout << "=== Dados do Aluno ===" << endl;
	
	cout << "Nome: " << aux.getNome() << endl;
	cout << "Email: " << aux.getEmail() << endl;
	cout << "Idade: " << aux.getIdade() << endl;
	cout << "Matricula: " << aux.getMatricula() << endl;
	cout << "Curso: " << aux.getCurso() << endl;
}

// função responsável por mostrar os dados da classe Professor
void visualizaProfessor(Professor aux)
{
	cout << "=== Dados do Professor ===" << endl;
	
	cout << "Nome: " << aux.getNome() << endl;
	cout << "Email: " << aux.getEmail() << endl;
	cout << "Idade: " << aux.getIdade() << endl;
	cout << "Departamento: " << aux.getDepartamento() << endl;
	cout << "Sala: " << aux.getSala() << endl;
}