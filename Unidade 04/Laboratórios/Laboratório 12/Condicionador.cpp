// Implementando um programa que simula um condicionador - Condicionador.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 12 

#include "Condicionador.h"

// Definindo o construtor sem par�metros
Condicionador::Condicionador(void)
{
	temperatura = potencia = 0;
}

// Definindo o construtor com par�metros
Condicionador::Condicionador(float temp, float pot)
{
	temperatura = temp;
	potencia = (pot >= 0 && pot <= 10) ? pot : 0;
}

// M�todo da classe respons�vel por ajustar a nova temperatura de acordo com a 
// pot�ncia
void Condicionador::ajustaCondicionador(void)
{
	temperatura = temperatura - (potencia * 1.8);
}

// M�todo da classe respons�vel por configurar o valor da temperatura
void Condicionador::setTemperatura(float temp)
{
	temperatura = temp;
}

// M�todo da classe respons�vel por configurar a pot�ncia
void Condicionador::setPotencia(float pot)
{
	potencia = (pot >= 0 && pot <= 10) ? pot : 0;
}

// M�todo da classe respons�vel por retornar a temperatura
float Condicionador::getTemperatura(void)
{
	ajustaCondicionador();
	return temperatura;
}

// M�todo da classe respons�vel por retornar a pot�ncia
float Condicionador::getPotencia(void)
{
	return potencia;
}




