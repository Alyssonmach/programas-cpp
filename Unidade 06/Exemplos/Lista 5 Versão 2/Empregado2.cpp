#include "Empregado2.h"

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
	
} void Empregado::imprimeDadosEmp() const{
	Pessoa::imprimeDadosPessoa();
	cout<<"Numero Seçao = "<<numeroSecao <<endl;
	cout<<"Salario Base = "<<salarioBase<<endl;
	cout<<"INSS = " << inss<<"%"<<endl;
}

