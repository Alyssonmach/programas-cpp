#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

using namespace std;

#include "Lista.cpp"

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	Lista minhaLista(100);
	NomesFuncionarios insereNomes;
	
	int opcao;
	
	do
	{
		
		cout << "Programa de Adição de Nomes em Lista" << endl << endl;
		
		cout << "1 - Inserir um novo nome na lista;" << endl;
		cout << "2 - Ordenar alfabeticamente a lista;" << endl;
		cout << "3 - Visualizar a lista de nomes;" << endl << endl;
		
		cout << "Informe sua Opção: ";
		cin >> opcao;
		
		cout << endl;
		
		system("pause");
		system("cls");
		
		if(opcao == 1)
		{
			cin.ignore();
			cout << "Insira um novo nome a lista: ";
			getline(cin, insereNomes.nome);
			
			minhaLista.setLista(insereNomes);
			
			cout << endl << "Usuário cadastrado com sucesso!" << endl;
		}
		else if(opcao == 2)
		{
			minhaLista.OrdenaAlfabetica();
			cout << "Lista Ordenada!" << endl;
		}
		else if(opcao == 3)
		{
			minhaLista.imprimeLista();
		}
		else if(opcao == 4)
		{
			cout << "Sessão encerrada!" << endl;
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