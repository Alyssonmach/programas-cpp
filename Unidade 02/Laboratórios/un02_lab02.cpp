// Programa cadastrastramento de pessoas com IMC - un02_lab02.cpp
// Aluno: Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca para localização de arquivos
#include <locale>
// Biblioteca para manipulação de cadeias de caracteres
#include <string>
// Biblioteca para realizar operações matemáticas
#include <cmath>

// Acessa as funções padrão das bibliotecas
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
		float calculaIMC(void); // Membro de função da classe
    // Modificador de acesso public
    public:
    	void setValores(string, string, int, float, float); // Membro de função da classe
    	string getNome(void); // Membro de função da classe
    	string getSexo(void); // Membro de função da classe
    	int getIdade(void); // Membro de função da classe
    	float getAltura(void); // Membro de função da classe
    	float getPeso(void); // Membro de função da classe
    	void getIMC(void); // Membro de função da classe
    	void getDados(void); // Membro de função da classe
}; // Fim da classe Pessoa

// Implementação dos métodos da classe
void Pessoa::setValores(string nome_pessoa, string sexo_pessoa, int idade_pessoa, float altura_pessoa, float peso_pessoa)
{
	nome = nome_pessoa;
	sexo = sexo_pessoa;
	idade = idade_pessoa;
	altura = altura_pessoa;
	peso = peso_pessoa;
}

// Implementação dos métodos da classe
float Pessoa::calculaIMC(void)
{
	return (peso / pow(altura, 2));
}

// Implementação dos métodos da classe
string Pessoa::getNome(void)
{
	return nome;
}
// Implementação dos métodos da classe
string Pessoa::getSexo(void)
{
	return sexo;
}
// Implementação dos métodos da classe
int Pessoa::getIdade(void)
{
	return idade;
} 
// Implementação dos métodos da classe
float Pessoa::getAltura(void)
{
	return altura;
}
// Implementação dos métodos da classe
float Pessoa::getPeso(void)
{
	return peso;
}
// Implementação dos métodos da classe
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
// Implementação dos métodos da classe
void Pessoa::getDados(void)
{
	cout << "Nome: " << getNome() << endl;
	cout << "Sexo: " << getSexo() << endl;
	cout << "Idade: " << getIdade() << endl;
	cout << "Altura: " << getAltura() << endl;
	cout << "Peso: " << getPeso() << endl;
	getIMC();
}

// Função principal do programa
int main(void)
{
	// COnfigurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Definindo uma instância ou objeto da classe
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