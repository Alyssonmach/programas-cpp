#include "Cilindro.h"

Cilindro::Cilindro( int vx, int vy, double vraio, 
double alturaValue ) : Circulo2( vx, vy, vraio ){
		ajusta_altura( alturaValue );
}
void Cilindro::ajusta_altura( double alturaValue ) {
	altura = ( alturaValue < 0.0 ? 0.0 : alturaValue );
} 
double Cilindro::retorna_altura() const {
	return altura;
} 
double Cilindro::retornaArea() const {
	return 2 * Circulo2::retornaArea() + retornaComp() * retorna_altura();
}
double Cilindro::retorna_volume() const {
		return Circulo2::retornaArea() * retorna_altura();
}
void Cilindro::imprime() const{
		Circulo2::imprime();
		cout << "Altura = " << retorna_altura()<<endl;
  
}
