// Implementando um sistema de controle de televis�o - un03_lab07.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 03 - Laborat�rio 07

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

// Definindo uma classe televis�o
class Televisao
{
	// Modificador de acesso private
	private:
		// Membros de dados da classe
		int volume, canal;
    public:
    	// Construtor (default)
    	Televisao(void);
    	// Membros de fun��es da classe
    	void aumentaVolume(void);
    	void diminuiVolume(void);
    	void aumentaCanal(void);
    	void diminuiCanal(void);
    	void trocaCanal(int);
    	void saidaDados(void);
}; // Fim da classe televis�o

// Implementa��o do construtor da classe
Televisao::Televisao(void)
{
	volume = 15;
	canal = 0;
}

// Cabe�alho da fun��o definida no programa
void menu(class Televisao);

// Implementa��o dos M�todos dos membros da classe

// Membro respons�vel por aumentar volume da televis�o
void Televisao::aumentaVolume(void)
{
	volume = (volume < 100) ? ++volume : volume;
}

// Membro respons�vel por diminuir volume da televis�o
void Televisao::diminuiVolume(void)
{
	volume = (volume > 0) ? --volume : volume;
}

// Membro respons�vel por aumentar o canal da televis�o
void Televisao::aumentaCanal(void)
{
	// Uma televis�o pode possuir milhares de canais dispon�veis
	canal++;
}

// Membro respons�vel por diminuir o canal da televis�o
void Televisao::diminuiCanal(void)
{
	canal = (canal > 0) ? --canal : canal;
}

// Membro respons�vel por trocar o canal da televis�o
void Televisao::trocaCanal(int novo_canal)
{
	canal = (novo_canal >= 0) ? novo_canal : canal;
}

// Membro respons�vel por imprimir os dados da televis�o
void Televisao::saidaDados(void)
{
	cout << "Canal atual: " << canal << endl;
	cout << "Volume da televis�o: " << volume << endl << endl;
}

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Inst�ncia ou objeto da fun��o
	Televisao controle;
	
	menu(controle);
	
	return 0;
}

// Fun��o respons�vel por criar um menu para a classe
void menu(Televisao controle)
{
	int opcao, canal_novo;
	
	do
	{
		cout << "|=|=|=| Televis�o XingLang Ultra Master Power Fusion 3.0 |=|=|=|" << endl << endl;
		
		controle.saidaDados();
		
		cout << "1 -> Vol +" << endl;
		cout << "2 -> Vol -" << endl;
		cout << "3 -> CH +" << endl;
		cout << "4 -> CH -" << endl;
		cout << "5 -> Acessar Teclado de Canais" << endl;
		cout << "6 -> Desligar Televis�o" << endl << endl;
		cout << "Op��o: ";
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
			cout << "Televis�o Desconectada" << endl << endl;
		}
		else
		{
			cout << "Entrada Inv�lida!" << endl;
		}
		
		system("pause");
		system("cls");
		
	}while( opcao != 6);
}
