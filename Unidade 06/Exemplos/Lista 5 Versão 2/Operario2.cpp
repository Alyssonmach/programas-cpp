#include "Operario2.h"

Operario::Operario(){
	valorProducao=0.0; 
	comissao=0.0;  
}
void Operario::setValorProducao(float valorProducao){
	this->valorProducao=valorProducao;
}
float Operario::getValorProducao() const{
	return valorProducao;
}
void Operario::setComissao(float comissao){
	this->comissao=comissao;
}
float Operario::getComissao(){
	return comissao;
}
float Operario::calcularSalario() const{
	return Empregado::calcularSalario()+(valorProducao*comissao)/100;
}
void Operario::imprime() const{
	Empregado::imprimeDadosEmp();
	cout<<"Valor da Produçao: "<<valorProducao<<endl;
	cout<<"Comissao: "<<comissao<<"%"<<endl;
	cout<<"Salario Liquido = "<<calcularSalario()<<endl<<endl;
}