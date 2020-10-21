// Implementação de um programa que simula o gerenciamento de imóveis - Novo.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 16 
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