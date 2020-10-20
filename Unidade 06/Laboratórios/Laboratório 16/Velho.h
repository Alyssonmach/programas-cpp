#ifndef VELHO_H
#define VELHO_H

#include "Imovel.h"

class Velho : public Imovel
{
	private:
		static float porcentagem_decrescimo;
	public:
		Velho(string = " ", int = 0, string = " ", string = " ", float = 0.0);
		static void setAumenta(float pcrt)
		{
			porcentagem_decrescimo = (pcrt >= 0 && pcrt <= 1) ? pcrt : 0;
		}
		static float getDecrescenta(void)
		{
			return porcentagem_decrescimo;
		}
		void setPreco(float);
		void setEndereco(string, int, string, string);
        float getPreco(void) const;
        float getPrecoDesconto(void) const;
        void getEndereco(void) const;
};

#endif