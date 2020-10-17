#ifndef CILINDRO_H
#define CILINDRO_H

#include "Circulo2.cpp"

class Cilindro : public Circulo2 {
	public:
		Cilindro( int = 0, int = 0, double = 0.0, double = 0.0 ); 
		void ajusta_altura( double );  
		double retorna_altura( ) const;  
		double retornaArea( ) const;   
		double retorna_volume( ) const;
		void imprime( ) const; 
	private:                               
		double altura; 
}; 
#endif
