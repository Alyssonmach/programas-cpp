// Usando static para retornar total de objetos - mainAbelha.cpp

#include "Abelha.cpp"
#include <locale>
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Programa Registra Abelhas" << endl << endl;
	
	Abelha abelha1, abelha2("Isabel");
	
	{ // Todo objeto declarado aqui será destruido até o final do escopo pelo destrutor
		Abelha abelha3("Malafaia"), abelha4("Rodolfo Ofo");
		
		cout << "Total de Abelhas: " << Abelha::totalAbelhas() << endl << endl;
	}
	
	cout << "Nome da primeira abelha: " << abelha1.nome() << endl;
	
	cout << endl;
	
	cout << "Nome da segunda abelha: " << abelha2.nome() << endl << endl;
	
	abelha1.setNome("Francisco");
	
	
	cout << "Nome da primeira abelha: " << abelha1.nome() << endl;
	
	cout << endl;
	
	cout << "Nome da segunda abelha: " << abelha2.nome() << endl << endl;
	
	cout << "Total de abelhas: " << Abelha::totalAbelhas() << endl;
	
	return 0;
}