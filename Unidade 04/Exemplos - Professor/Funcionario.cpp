#include "Funcionario.h"

void Funcionario::setHorasTrab(float ht){
     horasTrab=ht;    
}
void Funcionario::setValorHora(float vh){
     valorHora=vh;    
}
void Funcionario::calcSalario(){
     salario=horasTrab*valorHora;    
}
float Funcionario::getSalario(){
      return salario;     
}
