// Implementando um programa que simula um condicionador - Condicionador.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 04 - Laboratório 12 

#include "Condicionador.h"

// Definindo o construtor sem parâmetros
Condicionador::Condicionador(void)
{
	temperatura = potencia = 0;
}

// Definindo o construtor com parâmetros
Condicionador::Condicionador(float temp, float pot)
{
	temperatura = temp;
	potencia = (pot >= 0 && pot <= 10) ? pot : 0;
}

// Método da classe responsável por ajustar a nova temperatura de acordo com a 
// potência
void Condicionador::ajustaCondicionador(void)
{
	temperatura = temperatura - (potencia * 1.8);
}

// Método da classe responsável por configurar o valor da temperatura
void Condicionador::setTemperatura(float temp)
{
	temperatura = temp;
}

// Método da classe responsável por configurar a potência
void Condicionador::setPotencia(float pot)
{
	potencia = (pot >= 0 && pot <= 10) ? pot : 0;
}

// Método da classe responsável por retornar a temperatura
float Condicionador::getTemperatura(void)
{
	ajustaCondicionador();
	return temperatura;
}

// Método da classe responsável por retornar a potência
float Condicionador::getPotencia(void)
{
	return potencia;
}




