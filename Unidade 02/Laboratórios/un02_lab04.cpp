// Programa que calcula as propriedades de um retângulo - un02_lab01.cpp
// Aluno: Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236

// Biblioteca responsável pelo fluxo de entrada e saída de dados
#include <iostream>
// Biblioteca responsável por localização de arquivos
#include <locale>
// Biblioteca para relizar operações numéricas
#include <cmath>

// Acessa as funções das bibliotecas padrão
using namespace std;

// Definindo uma classe Retangulo
class Retangulo{
	
	// Modificador de acesso private
	private:
		int pix,piy,psx, psy; // Membro de Dados da Classe
		bool checar(int,int,int,int); // Membro de Função da Classe
    // Modificador de acesso public
	public:
		void setValores(int, int, int, int); // Membro de Função da Classe
		int comprimento(void); // Membro de Função da Classe
		int largura(void); // Membro de Função da Classe
		int perimetro(void); // Membro de Função da Classe
		int area(void); // Membro de Função da Classe
		bool ehquadrado(void); // Membro de Função da Classe
		void imprimeDados(void); // Membro de Função da Classe
};

// Implementação dos métodos da classe
bool Retangulo::checar(int x1, int y1, int x2, int y2)
{
	if(x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0)
		return false;
	else if(x1 > 15 || y1 > 15 || x2 > 15 || y2 > 15)
		return false;
	else
		return true;
}
// Implementação dos métodos da classe
void Retangulo::setValores(int x1, int y1, int x2, int y2)
{
	pix = x1;
	piy = y1;
	psx = x2;
	psy = y2;
}
// Implementação dos métodos da classe
int Retangulo::comprimento(void)
{
	if(fabs(psx - pix) >= fabs(psy - piy))
		return fabs(psx - pix);
	else
		return fabs(psy - piy);
}
// Implementação dos métodos da classe
int Retangulo::largura(void)
{
	if(fabs(psx - pix) <= fabs(psy - piy))
		return fabs(psx - pix);
	else
		return fabs(psy - piy);
}
// Implementação dos métodos da classe
int Retangulo::perimetro(void)
{
	return 2* fabs(psx - pix) + 2 * fabs(psy - piy);
}
// Implementação dos métodos da classe
int Retangulo::area(void)
{
	return fabs(psx - pix) * fabs(psy - piy);
}
// Implementação dos métodos da classe
bool Retangulo::ehquadrado(void)
{
	if(fabs(psx - pix) == fabs(psy - piy))
		return true;
	else
		return false;
}
// Implementação dos métodos da classe
void Retangulo::imprimeDados(void)
{
	cout << "O comprimento do retângulo é: " << comprimento() << " u.c." << endl;
	cout << "A largura do retângulo é: " << largura() << " u.l." << endl;
	cout << "O perímetro do retângulo é: " << perimetro() << " u.p." << endl;
	cout << "A área do retângulo é: " << area() << " u.a." << endl;
	
	if(ehquadrado())
		cout << "O objeto é um quadrado." << endl;
	else
		cout << "O objeto é um retângulo." << endl;
	
	if(checar(pix, piy, psx, psy))
		cout << "O objeto está no primeiro quadrante e possui lados menores que 15 u.c." << endl;
	else 
		cout << "O objeto não está no primeiro quadrante ou não possui lados menores que 15 u.c." << endl;
}

// Função principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Instância ou objeto da classe
	Retangulo ret1;
	
	int x1, y1, x2, y2;
	
	cout << "Programa Calculadora de retângulos." << endl << endl;
	
	cout << "Insira a coordenada x do primeiro vêrtice do triângulo: ";
	cin >> x1;
	cout << "Insira a coordenada y do primeiro vêrtice do triângulo: ";
	cin >> y1;
	
	cout << "Insira a coordenada x do segundo vêrtice do triângulo: ";
	cin >> x2;
	cout << "Insira a coordenada y do segundo vêrtice do triângulo: ";
	cin >> y2;
	
	ret1.setValores(x1, y1, x2, y2);
	
	cout << endl << endl;
	
	ret1.imprimeDados();
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal