#include "Administrador2.h"

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
void Administrador::imprime() const{
	Empregado::imprimeDadosEmp();
	cout<<"Ajuda de custo: "<<ajudasDeCusto<<endl;
	cout<<"Salario Liquido do Administrador: "<<calcularSalario()<<endl<<endl;
}