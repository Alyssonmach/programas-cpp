// Programa cadastrastramento de pessoas com IMC - un02_lab02.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca para localiza��o de arquivos
#include <locale>
// Biblioteca para manipula��o de cadeias de caracteres
#include <string>
// Biblioteca para realizar opera��es matem�ticas
#include <cmath>

// Acessa as fun��es padr�o das bibliotecas
using namespace std;

// Definindo uma classe Pessoa
class Pessoa
{
	// Modificador de acesso private
	private:
		string nome; // Membro de dados da classe
		string sexo; // Membro de dados da classe
		int idade; // Membro de dados da classe
		float altura; // Membro de dados da classe
		float peso; // Membro de dados da classe
		float calculaIMC(void); // Membro de fun��o da classe
    // Modificador de acesso public
    public:
    	void setValores(string, string, int, float, float); // Membro de fun��o da classe
    	string getNome(void); // Membro de fun��o da classe
    	string getSexo(void); // Membro de fun��o da classe
    	int getIdade(void); // Membro de fun��o da classe
    	float getAltura(void); // Membro de fun��o da classe
    	float getPeso(void); // Membro de fun��o da classe
    	void getIMC(void); // Membro de fun��o da classe
    	void getDados(void); // Membro de fun��o da classe
}; // Fim da classe Pessoa

// Implementa��o dos m�todos da classe
void Pessoa::setValores(string nome_pessoa, string sexo_pessoa, int idade_pessoa, float altura_pessoa, float peso_pessoa)
{
	nome = nome_pessoa;
	sexo = sexo_pessoa;
	idade = idade_pessoa;
	altura = altura_pessoa;
	peso = peso_pessoa;
}

// Implementa��o dos m�todos da classe
float Pessoa::calculaIMC(void)
{
	return (peso / pow(altura, 2));
}

// Implementa��o dos m�todos da classe
string Pessoa::getNome(void)
{
	return nome;
}
// Implementa��o dos m�todos da classe
string Pessoa::getSexo(void)
{
	return sexo;
}
// Implementa��o dos m�todos da classe
int Pessoa::getIdade(void)
{
	return idade;
} 
// Implementa��o dos m�todos da classe
float Pessoa::getAltura(void)
{
	return altura;
}
// Implementa��o dos m�todos da classe
float Pessoa::getPeso(void)
{
	return peso;
}
// Implementa��o dos m�todos da classe
void Pessoa::getIMC(void)
{
	if(calculaIMC() <= 18.5)
	{
		cout << "Abaixo do peso normal" << endl;
	}
	else if (calculaIMC() > 18.5 && calculaIMC() <= 25.0)
	{
		cout << "Peso normal" << endl;
	}
	else if (calculaIMC() > 25.0 && calculaIMC() <= 30.0)
	{
		cout << "Acima do peso" << endl;
	}	
	else
	{
		cout << "Obesidade" << endl;
	}
}
// Implementa��o dos m�todos da classe
void Pessoa::getDados(void)
{
	cout << "Nome: " << getNome() << endl;
	cout << "Sexo: " << getSexo() << endl;
	cout << "Idade: " << getIdade() << endl;
	cout << "Altura: " << getAltura() << endl;
	cout << "Peso: " << getPeso() << endl;
	getIMC();
}

// Fun��o principal do programa
int main(void)
{
	// COnfigurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Definindo uma inst�ncia ou objeto da classe
	Pessoa pessoa1;
	
	string nome, sexo;
	int idade;
	float altura, peso;
	
	cout << "Programa de cadastramento de pessoas." << endl << endl;
	
	cout << "Insira seu nome: ";
	getline(cin, nome);
	cout << "Insira seu sexo: ";
	getline(cin, sexo);
	cout << "Insira sua idade: ";
	cin >> idade;
	cout << "Insira seu peso: ";
	cin >> peso;
	cout << "Insira sua altura: ";
	cin >> altura;
	
	cout << endl << endl;
	
	pessoa1.setValores(nome, sexo, idade, altura, peso);
	pessoa1.getDados();
	
	// Indica que o programa terminou com sucesso
	return 0;
}