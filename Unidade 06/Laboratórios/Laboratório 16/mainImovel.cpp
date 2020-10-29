// Implementa��o de um programa que simula o gerenciamento de im�veis - mainImovel.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

#include "Imovel.cpp"
#include "Novo.cpp"
#include "Velho.cpp"

// Definindo cabe�alhos de fun��es para impress�o dos m�todos das classes
void ImovelNovo(class Novo);
void ImovelVelho(class Velho);

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	string rua, bairro, cep;
	int numero, opcao;
	float preco, taxa;
	
	cout << fixed << setprecision(2);
	
	// Objetos ou inst�ncias das classes
	Novo casa_nova(" ", 0, " ", " ", 0.0);
	Velho casa_velha(" ", 0, " ", " ", 0.0);
	
	do
	{
		cout << "=== Programa de An�lise Residenciais ===" << endl << endl;
		
		cout << "Escolha uma op��o: " << endl;
		
		cout << "1 - Configurar dados da casa nova;" << endl;
		cout << "2 - Configurar dados da casa antiga;" << endl;
		cout << "3 - Visualizar dados da casa nova;" << endl;
		cout << "4 - Visualizar dados da casa antiga;" << endl;
		cout << "5 - Sair do programa;" << endl << endl;
		cout << "Insira uma op��o: ";
		cin >> opcao;
		
		system("pause");
		system("cls");
		
		if(opcao == 1)
		{
			cin.ignore();
			cout << "Informe a rua onde a casa se localiza: ";
			getline(cin, rua);
			
			cout << "Informe o n�mero da casa: ";
			cin >> numero;
			
			cin.ignore();
			cout << "Informe o bairro da casa: ";
			getline(cin, bairro);
			
			cout << "Informe o CEP da casa: ";
			getline(cin, cep);
			
			casa_nova.setEndereco(rua, numero, bairro, cep);
			
			cout << "Informe o pre�o da casa: ";
			cin >> preco;
			
			casa_nova.setPreco(preco);
			
			cout << "Informe uma taxa de aumento no pre�o da casa [0,1]: ";
			cin >> taxa;
			
			Novo::setAumenta(taxa);
			
			system("pause");
			system("cls");
			
			ImovelNovo(casa_nova);
		}
		else if(opcao == 2)
		{
			cin.ignore();
			cout << "Informe a rua onde a casa se localiza: ";
			getline(cin, rua);
			
			cout << "Informe o n�mero da casa: ";
			cin >> numero;
			
			cin.ignore();
			cout << "Informe o bairro da casa: ";
			getline(cin, bairro);
			
			cout << "Informe o CEP da casa: ";
			getline(cin, cep);
			
			casa_velha.setEndereco(rua, numero, bairro, cep);
			
			cout << "Informe o pre�o da casa: ";
			cin >> preco;
			
			casa_velha.setPreco(preco);
			
			cout << "Informe uma taxa de decr�scimo no pre�o da casa [0,1]: ";
			cin >> taxa;
			
			Velho::setAumenta(taxa);
			
			system("pause");
			system("cls");
			
			ImovelVelho(casa_velha);
		}
		else if(opcao == 3)
		{
			ImovelNovo(casa_nova);
		}
		else if(opcao == 4)
		{
			ImovelVelho(casa_velha);
		}
		else if(opcao == 5)
		{
			cout << "Programa encerrado." << endl;
		}
		else
		{
			cout << "Entrada Inv�lida. Tente Novamente." << endl << endl;
		}
		
		system("pause");
		system("cls");
		
	}while(opcao != 5);
	
	return 0;
}

void ImovelNovo(class Novo aux)
{
	cout << "Endereco da casa: " << endl;
	aux.getEndereco();
	
	cout << "Taxa de Acr�scimo no pre�o da casa: " << Novo::getAumenta() << endl;
	
	cout << "Pre�o da casa: " << aux.getPreco() << " R$" << endl;
	
	cout << "Pre�o com taxa de aumento: " << aux.getPrecoAumento() << " R$" << endl;

	return;
}

void ImovelVelho(class Velho aux)
{
	cout << "Endereco da casa: " << endl;
	aux.getEndereco();
	
	cout << "Taxa de Decr�scimo no pre�o da casa: " << Velho::getDecrescenta() << endl;
	
	cout << "Pre�o da casa: " << aux.getPreco() << " R$" << endl;
	
	cout << "Pre�o com taxa de decrescimento: " << aux.getPrecoDesconto() << " R$" << endl;

	return;
}