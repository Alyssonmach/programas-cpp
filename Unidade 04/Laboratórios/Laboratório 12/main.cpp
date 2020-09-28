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
	Condicionador condicionador1, condicionador2;
	
	float temp1, temp2, pot1, pot2; 
	
	cout << "=== Programa Condicionador de Temperaturas ===" << endl << endl;
	
	cout << fixed << setprecision(2);
	
	cout << "Informe a temperatura do primeiro condicionador: ";
	cin >> temp1;
	
	condicionador1.setTemperatura(temp1);
	
	cout << "Informe a potência do primeiro condicionador: ";
	cin >> pot1;
	
	cout << "Informe a temperatura do segundo condicionador: ";
	cin >> temp2;
	
	condicionador2.setTemperatura(temp2);
	
	cout << "Informe a potência do segundo condicionador: ";
	cin >> pot2;
	
	cout << "A temperatura atual do primeiro condicionador é: ";
	cout << condicionador1.getTemperatura() << "° C" << endl;
	
	cout << "A temperatura atual do segundo condicionador é: ";
	cout << condicionador2.getTemperatura() << "° C" << endl << endl;
	
	condicionador1.setPotencia(pot1);
	condicionador2.setPotencia(pot2);
	
	cout << "A temperatura resultante do primeiro condicionador é: ";
	cout << condicionador1.getTemperatura() << "° C" << endl;
	
	cout << "A temperatura resultante do segundo condicionador é: ";
	cout << condicionador2.getTemperatura() << "° C" << endl;

	return 0;
}