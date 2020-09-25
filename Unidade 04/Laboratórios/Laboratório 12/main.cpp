// Implementando um programa que simula um condicionador - main.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 04 - Laboratório 12 

#include <iostream>
#include "Condicionador.cpp"
#include <iomanip>
#include <locale>

using namespace std;

// Função principal do programa

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Instâncias ou objetos da classe
	Condicionador condicionador1(25, 0), condicionador2;
	
	cout << "=== Programa Condicionador de Temperaturas ===" << endl << endl;
	
	cout << fixed << setprecision(2);
	
	condicionador2.setTemperatura(31);
	
	cout << "A temperatura atual do primeiro condicionador é: ";
	cout << condicionador1.getTemperatura() << "° C" << endl;
	
	cout << "A temperatura atual do segundo condicionador é: ";
	cout << condicionador2.getTemperatura() << "° C" << endl << endl;
	
	condicionador1.setPotencia(10);
	condicionador2.setPotencia(5);
	
	cout << "A temperatura resultante do primeiro condicionador é: ";
	cout << condicionador1.getTemperatura() << "° C" << endl;
	
	cout << "A temperatura resultante do segundo condicionador é: ";
	cout << condicionador2.getTemperatura() << "° C" << endl;

	return 0;
}