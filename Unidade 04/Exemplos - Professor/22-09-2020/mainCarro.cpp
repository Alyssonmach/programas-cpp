#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;
#include "Pessoa.cpp"
#include "Carro.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	Pessoa p1;
    p1.setNome("Jose");
    p1.setCPF(123456);
    p1.setEndereco("Rua das Flores", 10, "Bodocongó", 58000);
    // instancia de carro com os valores iniciais de carro1
    Carro carro1(p1, "Fiat",2020,"XYZ1998", 10);
    
	carro1.abastece(30); //abastece o carro com 30 litros
	
	//o método percurso() indica que o carro vai andar 100km (se
	//houver combustível). Caso contrário, a quilometragem não é alterada
	carro1.percurso(100); 
	
	cout<<endl<<"Quilomentragem do carro: "<<carro1.getQuilometragem()<<endl;
	cout<<"Tanque: "<<carro1.getTanque()<<endl;
	
	return 0;
}