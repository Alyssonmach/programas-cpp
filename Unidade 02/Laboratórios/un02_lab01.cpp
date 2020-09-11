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
};

// Implementação dos métodos da classe
bool Retangulo::checar(int x1, int y1, int x2, int y2)
{
	if(fabs(x2 - x1) == fabs(y2 - y1))
		return true;
	else
		return false;
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
	return checar(pix, piy, psx, psy);
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
	
	cout << "O comprimento do retângulo é: " << ret1.comprimento() << endl;
	cout << "A largura do retângulo é: " << ret1.largura() << endl;
	cout << "O perímetro do retângulo é: " << ret1.perimetro() << endl;
	cout << "A área do retângulo é: " << ret1.area() << endl;
	
	if(ret1.ehquadrado())
		cout << "O objeto é um quadrado." << endl;
	else
		cout << "O objeto é um retângulo." << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal