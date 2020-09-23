// Implementando um sistema de controle de televisão - un03_lab07.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 03 - Laboratório 07

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

// Definindo uma classe televisão
class Televisao
{
	// Modificador de acesso private
	private:
		// Membros de dados da classe
		int volume, canal;
    public:
    	// Construtor (default)
    	Televisao(void);
    	// Membros de funções da classe
    	void aumentaVolume(void);
    	void diminuiVolume(void);
    	void aumentaCanal(void);
    	void diminuiCanal(void);
    	void trocaCanal(int);
    	void saidaDados(void);
}; // Fim da classe televisão

// Implementação do construtor da classe
Televisao::Televisao(void)
{
	volume = 15;
	canal = 0;
}

// Cabeçalho da função definida no programa
void menu(class Televisao);

// Implementação dos Métodos dos membros da classe

// Membro responsável por aumentar volume da televisão
void Televisao::aumentaVolume(void)
{
	volume = (volume < 100) ? ++volume : volume;
}

// Membro responsável por diminuir volume da televisão
void Televisao::diminuiVolume(void)
{
	volume = (volume > 0) ? --volume : volume;
}

// Membro responsável por aumentar o canal da televisão
void Televisao::aumentaCanal(void)
{
	// Uma televisão pode possuir milhares de canais disponíveis
	canal++;
}

// Membro responsável por diminuir o canal da televisão
void Televisao::diminuiCanal(void)
{
	canal = (canal > 0) ? --canal : canal;
}

// Membro responsável por trocar o canal da televisão
void Televisao::trocaCanal(int novo_canal)
{
	canal = (novo_canal >= 0) ? novo_canal : canal;
}

// Membro responsável por imprimir os dados da televisão
void Televisao::saidaDados(void)
{
	cout << "Canal atual: " << canal << endl;
	cout << "Volume da televisão: " << volume << endl << endl;
}

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Instância ou objeto da função
	Televisao controle;
	
	menu(controle);
	
	return 0;
}

// Função responsável por criar um menu para a classe
void menu(Televisao controle)
{
	int opcao, canal_novo;
	
	do
	{
		cout << "|=|=|=| Televisão XingLang Ultra Master Power Fusion 3.0 |=|=|=|" << endl << endl;
		
		controle.saidaDados();
		
		cout << "1 -> Vol +" << endl;
		cout << "2 -> Vol -" << endl;
		cout << "3 -> CH +" << endl;
		cout << "4 -> CH -" << endl;
		cout << "5 -> Acessar Teclado de Canais" << endl;
		cout << "6 -> Desligar Televisão" << endl << endl;
		cout << "Opção: ";
		cin >> opcao;
		
		if(opcao == 1)
		{
			controle.aumentaVolume();
		}
		else if(opcao == 2)
		{
			controle.diminuiVolume();
		}
		else if(opcao == 3)
		{
			controle.aumentaCanal();
		}
		else if(opcao == 4)
		{
			controle.diminuiCanal();
		}
		else if(opcao == 5)
		{
			cout << "Informe um canal: ";
			cin >> canal_novo;
			controle.trocaCanal(canal_novo); 
		}
		else if(opcao == 6)
		{
			cout << "Televisão Desconectada" << endl << endl;
		}
		else
		{
			cout << "Entrada Inválida!" << endl;
		}
		
		system("pause");
		system("cls");
		
	}while( opcao != 6);
}
