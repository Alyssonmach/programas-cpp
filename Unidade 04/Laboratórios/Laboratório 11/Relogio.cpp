// Implementando um programa que simula um relógio digital - Relogio.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 04 - Laboratório 11

#include "Relogio.h"

// Definindo um construtor sem parâmetros para a classe relôgio
Relogio::Relogio(void)
{
	hora = minuto = segundo = 0;
}

// Método da classe responsável por atualizar os valores do relógio
void Relogio::setHora(int h, int m, int s)
{
	hora = (h >= 0 && h <= 23) ? h : 0;
	minuto = (m >= 0 && m <= 59) ? m : 0;
	segundo = (s >= 0 && s <= 59) ? s : 0;
}

// Método da classe responsável por retornar os valores do relógio
// Retorno usando passagem por referência
void Relogio::getHora(int *h, int *m, int *s)
{
	*h = hora;
	*m = minuto;
	*s = segundo;
}

// Método da classe responsável por passar 1 segundo no relógio
void Relogio::passaSegundo(void)
{
	int copia_minuto = minuto;
	
	segundo += (segundo < 59) ? 1 : -segundo;
	minuto = (segundo == 0) ? (minuto + 1) : minuto;
	minuto = (minuto > 59) ? 0 : minuto;
	hora = (minuto == 0 && copia_minuto == 59) ? (hora + 1) : hora;
	hora = (hora > 23) ? 0 : hora; 
}


