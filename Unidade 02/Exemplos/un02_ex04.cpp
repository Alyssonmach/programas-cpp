// Exemplo de destrutor - un02_ex04.cpp

#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

class Org
{
	private:	
		char *razaosocial;
    public:
    	Org();
    	~Org();	
};

Org::Org()
{
	char aux[80];
	cout << "Digite o nome da organização: ";
	cin.get(aux, 80);
	razaosocial = new char(strlen(aux) + 1);
	strcpy(razaosocial, aux);
}

Org::~Org()
{
	delete razaosocial;
}

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	Org objOrg;
	
	return 0;
}