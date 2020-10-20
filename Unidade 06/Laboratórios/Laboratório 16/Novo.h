#ifndef NOVO_H
#define NOVO_H

#include "Imovel.h"

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