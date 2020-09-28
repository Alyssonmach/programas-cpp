// Implementando um programa que simula um relógio digital - main.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 04 - Laboratório 11

#include <iostream>
#include "Relogio.cpp"
#include <locale>
#include <windows.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Cabeçalho da função 
void menuRelogio(class Relogio);

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Instância ou objeto da classe
	Relogio meuRelogio;
	
	int h, m, s;
	
	cout << "Programa Meu Relógio Pessoal" << endl << endl;
	
	cout << "Insira a hora atual: ";
	cin >> h;
	
	cout << "Insira o minuto atual: ";
	cin >> m;
	
	cout << "Insira o segundo atual: ";
	cin >> s;
	
	meuRelogio.setHora(h, m, s);
	
	system("cls");
	
	menuRelogio(meuRelogio);
	
	return 0;
}

// Criando um menu para o relógio
void menuRelogio(Relogio rel)
{
	int hora, minuto, segundo;
	
	do
	{
		// Retorno usando passagem por referência
		rel.getHora(&hora, &minuto, &segundo);
		
		cout << "Meu Relógio Pessoal" << endl << endl;
		
		cout << setfill('0') << setw(2) << hora << ":";
		cout << setfill('0') << setw(2) << minuto << ":";
		cout << setfill('0') << setw(2) << segundo << endl;
		
		rel.passaSegundo();
		
		Sleep(1000);
		system("cls");
		
	}while(true);
}