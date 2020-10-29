// Implementando um programa que simula uma conta de poupan�a - mainContaDePoupanca.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 13 

#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>
#include "ContaDePoupanca.cpp"

using namespace std;

// Cabe�alho para a fun��o menu
void menu(class ContaDePoupanca);


// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << fixed << setprecision(2);
	
	ContaDePoupanca minha_conta(2000.0);
	ContaDePoupanca::modifiqueTaxaDeJurosAnual(8.0);
	
	menu(minha_conta);
	
	return 0;
}

// Fun��o que exibe um menu interativo para a classe ContaDePoupanca
void menu(class ContaDePoupanca manipula_conta)
{
	int opcao;
	float saldo;
	
	do
	{
		cout << "=== Programa que simula uma poupan�a banc�ria ===" << endl << endl;
		
		cout << "Digite uma das op��es abaixo: " << endl << endl;
		cout << "1 - Obter o saldo atual da conta" << endl;
		cout << "2 - Obter a taxa de juros anual" << endl;
		cout << "3 - Obter o rendimento do pr�ximo m�s" << endl;
		cout << "4 - Configurar o saldo da conta" << endl;
		cout << "5 - Encerrar processos no caixa" << endl << endl;
		
		cout << "Digite sua op��o: ";
		cin >> opcao;
		
		cout << endl;
		
		system("pause");
		system("cls");
		
		if(opcao == 1)
		{
			cout << "Saldo atual da conta: " << manipula_conta.getSaldoDaPoupanca();
			cout << " R$" << endl << endl;
		}
		else if(opcao == 2)
		{
			cout << "Taxa de Juros anual: " << ContaDePoupanca::getTaxaDeJurosAnual();
			cout << " %" << endl << endl;
		}
		else if(opcao == 3)
		{
			cout << "Rendimento do pr�ximo m�s: ";
			manipula_conta.calculeRendimentoMensal();
			cout << " R$" << endl << endl;
		}
		else if (opcao == 4)
		{
			cout << "Insira um novo saldo para a sua conta: ";
			cin >> saldo;
			manipula_conta.setSaldoDaPoupanca(saldo);
			
			cout << "Saldo atual da conta: " << manipula_conta.getSaldoDaPoupanca();
			cout << " R$" << endl << endl;
		}
		else if(opcao == 5)
		{
			cout << "Caixa encerrado, volte sempre!" << endl << endl;
		}
		else
		{
			cout << "Dados digitados incorretos. Por favor tente novamente!" << endl << endl;
		}
		
		system("pause");
		system("cls");
		
	}while(opcao != 5);
}