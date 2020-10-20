#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

#include "Imovel.cpp"
#include "Novo.cpp"
#include "Velho.cpp"

void ImovelNovo(class Novo);
void ImovelVelho(class Velho);

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	string rua, bairro, cep;
	int numero, opcao;
	float preco, taxa;
	
	cout << fixed << setprecision(2);
	
	Novo casa_nova(" ", 0, " ", " ", 0.0);
	Velho casa_velha(" ", 0, " ", " ", 0.0);
	
	do
	{
		cout << "=== Programa de Análise Residenciais ===" << endl << endl;
		
		cout << "Escolha uma opção: " << endl;
		
		cout << "1 - Configurar dados da casa nova;" << endl;
		cout << "2 - Configurar dados da casa antiga;" << endl;
		cout << "3 - Visualizar dados da casa nova;" << endl;
		cout << "4 - Visualizar dados da casa antiga;" << endl;
		cout << "5 - Sair do programa;" << endl << endl;
		cout << "Insira uma opção: ";
		cin >> opcao;
		
		system("pause");
		system("cls");
		
		if(opcao == 1)
		{
			cin.ignore();
			cout << "Informe a rua onde a casa se localiza: ";
			getline(cin, rua);
			
			cout << "Informe o número da casa: ";
			cin >> numero;
			
			cin.ignore();
			cout << "Informe o bairro da casa: ";
			getline(cin, bairro);
			
			cout << "Informe o CEP da casa: ";
			getline(cin, cep);
			
			casa_nova.setEndereco(rua, numero, bairro, cep);
			
			cout << "Informe o preço da casa: ";
			cin >> preco;
			
			casa_nova.setPreco(preco);
			
			cout << "Informe uma taxa de aumento no preço da casa [0,1]: ";
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
			
			cout << "Informe o número da casa: ";
			cin >> numero;
			
			cin.ignore();
			cout << "Informe o bairro da casa: ";
			getline(cin, bairro);
			
			cout << "Informe o CEP da casa: ";
			getline(cin, cep);
			
			casa_velha.setEndereco(rua, numero, bairro, cep);
			
			cout << "Informe o preço da casa: ";
			cin >> preco;
			
			casa_velha.setPreco(preco);
			
			cout << "Informe uma taxa de decréscimo no preço da casa [0,1]: ";
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
			cout << "Entrada Inválida. Tente Novamente." << endl << endl;
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
	
	cout << "Taxa de Acréscimo no preço da casa: " << Novo::getAumenta() << endl;
	
	cout << "Preço da casa: " << aux.getPreco() << " R$" << endl;
	
	cout << "Preço com taxa de aumento: " << aux.getPrecoAumento() << " R$" << endl;

	return;
}

void ImovelVelho(class Velho aux)
{
	cout << "Endereco da casa: " << endl;
	aux.getEndereco();
	
	cout << "Taxa de Decréscimo no preço da casa: " << Velho::getDecrescenta() << endl;
	
	cout << "Preço da casa: " << aux.getPreco() << " R$" << endl;
	
	cout << "Preço com taxa de decrescimento: " << aux.getPrecoDesconto() << " R$" << endl;

	return;
}