#ifndef NORMAL_H
#define NORMAL_H

#include "Ingresso.h"

class Normal : public Ingresso
{
	public:
		Normal(float = 0.0);
		void imprimeNormal(void) const; 
}

#endif