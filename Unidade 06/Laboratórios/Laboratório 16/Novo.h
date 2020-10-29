// Implementa��o de um programa que simula o gerenciamento de im�veis - Novo.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef NOVO_H
#define NOVO_H

#include "Imovel.h"

// Implementando a classe Novo que herda a classe base Imovel
class Novo : public Imovel
{
	private:
		static float porcentagem_aumento;
	public:
		Novo(string = " ", int = 0, string = " ", string = " ", float = 0.0);
		static void setAumenta(float pcrt)
		{
			porcentagem_aumento = (pcrt >= 0 && pcrt <= 1) ? pcrt : 0;
		}
		static float getAumenta(void)
		{
			return porcentagem_aumento;
		}
		void setPreco(float);
		void setEndereco(string, int, string, string);
        float getPreco(void) const;
        float getPrecoAumento(void) const;
        void getEndereco(void) const;
};

#endif