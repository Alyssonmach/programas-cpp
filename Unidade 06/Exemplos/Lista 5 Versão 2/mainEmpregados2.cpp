#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

#include "Pessoa2.cpp"
#include "Empregado2.cpp"
#include "Administrador2.cpp"
#include "Operario2.cpp"

int main(){
	setlocale(LC_ALL,"");
	Administrador emp1;
	Operario emp2;
	
	emp1.setNome("Jose");
	emp1.setCPF(123456);
	emp1.setSalarioBase(10000);
	emp1.setNumeroSecao(444);
	emp1.setInss(20);
	emp1.setAjudasDeCusto(1000);
	emp1.imprime();
	
	emp2.setNome("Roberto");
	emp2.setCPF(7890);
	emp2.setSalarioBase(5000);
	emp1.setNumeroSecao(111);
	emp2.setInss(15);
	emp2.setValorProducao(2000);
	emp2.setComissao(5);
	emp2.imprime();
	
	return 0;
}