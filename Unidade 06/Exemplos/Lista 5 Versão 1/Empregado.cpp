#include "Empregado.h"

Empregado::Empregado(){
	numeroSecao=0;
	salarioBase=0.0;
	inss=0;
}

void Empregado::setNumeroSecao(int numeroSecao){
	this->numeroSecao = numeroSecao;
}
int Empregado::getNumeroSecao() const{
	return numeroSecao;
}
	
void Empregado::setSalarioBase(float salarioBase){
	this->salarioBase=salarioBase;
}
float Empregado::getSalarioBase() const{
	return salarioBase;
}
void Empregado::setInss(int inss){
	this->inss=inss;
}
int Empregado::getInss() const{
	return inss;
}
float Empregado::calcularSalario() const{
	return salarioBase -(salarioBase*inss)/100;	
} 
