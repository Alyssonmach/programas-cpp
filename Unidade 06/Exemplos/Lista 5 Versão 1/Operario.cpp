#include "Operario.h"

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