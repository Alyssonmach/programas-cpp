// Calculo de um retângulo com uma classe - un02_ex02.cpp
// Usando construtores sem parâmetros

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca de localização de arquivos
#include <locale>

using namespace std;

// Definindo uma classe
class Retangulo
{
	// Definindo um especificador de acesso a membros private
	private:
		int x, y; // Membro de dados da classe
    // Definindo um especificador de acesso a membros private
    public:
    	// Definindo um construtor para a classe
    	Retangulo(void);
    	void setValores(int, int); // Membro de funções da classe
    	int getX(void); // Membro de funções da classe
    	int getY(void); // Membro de funções da classe
    	int getArea(void); // Membro de funções da classe
}; // Fim da classe

// Implementando o construtor da classe
Retangulo::Retangulo(void)
{
	x = y = 0;
}

// Implementação dos métodos da classe
void Retangulo::setValores(int a, int b)
{
	x = a;
	y = b;
}

// Implementação dos métodos da classe
int Retangulo::getX(void)
{
	return x;
}

// Implementação dos métodos da classe
int Retangulo::getY(void)
{
	return y;
}

// Implementação dos métodos da classe
int Retangulo::getArea(void)
{
	return x*y;
}

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Definindo um objeto ou instância de uma classe
	Retangulo valores;
	int a, b;
	
	cout << "Programa que calcula a área de um triângulo." << endl << endl;
	
	cout << "Entre com o valor maior do retângulo: ";
	cin >> a;
	
	cout << "Entre com o valor menor do retângulo: ";
	cin >> b;
	
	valores.setValores(a, b);
	
	cout << "O retângulo cujos lado são " << valores.getX() << " u.c e ";
	cout << valores.getY() << " u.c, possui uma área de " << valores.getArea();
	cout << " u.c." << endl;
	return 0;	
}

