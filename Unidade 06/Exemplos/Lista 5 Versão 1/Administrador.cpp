#include "Administrador.h"

Administrador::Administrador(){
	   ajudasDeCusto=0.0;	
} 

void Administrador::setAjudasDeCusto(float ajudasDeCusto){
	this->ajudasDeCusto=ajudasDeCusto;
}
float Administrador::getAjudasDeCusto() const{
	return ajudasDeCusto;
}
float Administrador::calcularSalario() const{
	return Empregado::calcularSalario()+ajudasDeCusto;
}