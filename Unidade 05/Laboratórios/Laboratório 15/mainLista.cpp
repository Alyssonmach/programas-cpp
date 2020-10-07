// Implementando um programa Cria e Ordena uma lista de nomes - mainLista.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 15

#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

using namespace std;

// Cabeçalho da biblioteca criada
#include "Lista.cpp"

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Instâncias ou objetos da classe e struct
	Lista minhaLista(100);
	NomesFuncionarios insereNomes;
	
	int opcao;
	
	do
	{
		
		cout << "Programa de Adição de Nomes em Lista" << endl << endl;
		
		cout << "1 - Inserir um novo nome na lista;" << endl;
		cout << "2 - Ordenar alfabeticamente a lista;" << endl;
		cout << "3 - Visualizar a lista de nomes;" << endl;
		cout << "4 - Encerrar programa;" << endl << endl;
		
		cout << "Informe sua Opção: ";
		cin >> opcao;
		
		cout << endl;
		
		system("cls");
		
		if(opcao == 1)
		{
			cin.ignore();
			cout << "Insira um novo nome para a lista: ";
			getline(cin, insereNomes.nome);
			
			minhaLista.setLista(insereNomes);
			
			cout << endl;
		}
		else if(opcao == 2)
		{
			minhaLista.OrdenaAlfabetica();
			cout << "Lista Ordenada!" << endl << endl;
		}
		else if(opcao == 3)
		{
			minhaLista.imprimeLista();
			
			cout << endl;
		}
		else if(opcao == 4)
		{
			cout << "Sessão encerrada com sucesso!" << endl << endl;
		}
		else
		{
			cout << "Entrada inválida! Por favor insira uma nova opção!" << endl;
		}
		
		system("pause");
		system("cls");
		
	}while(opcao != 4);
	return 0;
}