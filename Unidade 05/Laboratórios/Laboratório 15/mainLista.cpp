// Implementando um programa Cria e Ordena uma lista de nomes - mainLista.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 15

#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

using namespace std;

// Cabe�alho da biblioteca criada
#include "Lista.cpp"

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Inst�ncias ou objetos da classe e struct
	Lista minhaLista(100);
	NomesFuncionarios insereNomes;
	
	int opcao;
	
	do
	{
		
		cout << "Programa de Adi��o de Nomes em Lista" << endl << endl;
		
		cout << "1 - Inserir um novo nome na lista;" << endl;
		cout << "2 - Ordenar alfabeticamente a lista;" << endl;
		cout << "3 - Visualizar a lista de nomes;" << endl;
		cout << "4 - Encerrar programa;" << endl << endl;
		
		cout << "Informe sua Op��o: ";
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
			cout << "Sess�o encerrada com sucesso!" << endl << endl;
		}
		else
		{
			cout << "Entrada inv�lida! Por favor insira uma nova op��o!" << endl;
		}
		
		system("pause");
		system("cls");
		
	}while(opcao != 4);
	return 0;
}