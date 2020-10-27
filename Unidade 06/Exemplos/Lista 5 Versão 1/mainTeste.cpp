#include <iostream>
#include <string.h>
using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"
#include "Administrador.cpp"
#include "Operario.cpp"

int main(){
	Administrador emp1;
	Operario emp2;
	
	emp1.setSalarioBase(10000);
	emp1.setInss(20);
	emp1.setAjudasDeCusto(1000);
	cout<<"Salario Liquido do Administrador = "<< emp1.calcularSalario()<<endl;
	
	emp2.setSalarioBase(5000);
	emp2.setInss(15);
	emp2.setValorProducao(2000);
	emp2.setComissao(5);
	cout<<"Salario Liquido do Operario = "<< emp2.calcularSalario()<<endl;
	
	return 0;
}