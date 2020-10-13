#include "Circulo2.h"   

Circulo2::Circulo2(int x, int y, double raio):Ponto (x, y) {
  	  this->x = x;  //ATENÇÃO: x tem que ser declarado Protected
      this->y = y;  //ATENÇÃO: y tem que ser declarado Protected
	  alteraRaio(raio);
}

void Circulo2::alteraRaio( double raio ) {
	 this->raio = ( raio < 0.0 ? 0.0 : raio ); 
}
double Circulo2::retornaRaio() const {
	return raio;
}
double Circulo2::retornaDiametro() const { 
	return 2 * raio;
} 
double Circulo2::retornaComp() const {
	return 3.14159 * retornaDiametro(); 
} 
double Circulo2::retornaArea() const {
	return 3.14159 * raio * raio;
}
void Circulo2::imprime() const{
	Ponto::imprime();
	cout<<"raio = "<<retornaRaio()<<endl;
}
