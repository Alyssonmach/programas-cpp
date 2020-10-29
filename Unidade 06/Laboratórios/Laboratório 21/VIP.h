#ifndef VIP_H
#define VIP_H

#include "Ingresso.h"

class VIP : public Ingresso
{
	private:
		float valor_adicional;
    public:
    	VIP(float = 0.0, float = 0.0);
    	float valorVIP(void) const;
};

#endif