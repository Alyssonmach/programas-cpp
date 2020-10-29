// Implementando um programa que simula um condicionador - main.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 12 

#include <iostream>
#include "Condicionador.cpp"
#include <iomanip>
#include <locale>

using namespace std;

// Fun��o principal do programa

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Inst�ncias ou objetos da classe
	Condicionador condicionador1, condicionador2;
	
	float temp1, temp2, pot1, pot2; 
	
	cout << "=== Programa Condicionador de Temperaturas ===" << endl << endl;
	
	cout << fixed << setprecision(2);
	
	cout << "Informe a temperatura do primeiro condicionador: ";
	cin >> temp1;
	
	condicionador1.setTemperatura(temp1);
	
	cout << "Informe a pot�ncia do primeiro condicionador: ";
	cin >> pot1;
	
	cout << "Informe a temperatura do segundo condicionador: ";
	cin >> temp2;
	
	condicionador2.setTemperatura(temp2);
	
	cout << "Informe a pot�ncia do segundo condicionador: ";
	cin >> pot2;
	
	cout << "A temperatura atual do primeiro condicionador �: ";
	cout << condicionador1.getTemperatura() << "� C" << endl;
	
	cout << "A temperatura atual do segundo condicionador �: ";
	cout << condicionador2.getTemperatura() << "� C" << endl << endl;
	
	condicionador1.setPotencia(pot1);
	condicionador2.setPotencia(pot2);
	
	cout << "A temperatura resultante do primeiro condicionador �: ";
	cout << condicionador1.getTemperatura() << "� C" << endl;
	
	cout << "A temperatura resultante do segundo condicionador �: ";
	cout << condicionador2.getTemperatura() << "� C" << endl;

	return 0;
}