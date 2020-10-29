#include "Normal.h"

Normal::Normal(float valor) : public Ingresso(valor)

void Normal::imprimeValor(void) const
{
	cout << "Ingresso Normal" << endl;
}