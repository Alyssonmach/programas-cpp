// Programa que calcula as propriedades de um ret�ngulo - un02_lab01.cpp

// Biblioteca respons�vel pelo fluxo de entrada e sa�da de dados
#include <iostream>
// Biblioteca respons�vel por localiza��o de arquivos
#include <locale>
// Biblioteca para relizar opera��es num�ricas
#include <cmath>

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Definindo uma classe Retangulo
class Retangulo{
	
	// Modificador de acesso private
	private:
		int pix,piy,psx, psy; // Membro de Dados da Classe
		bool checar(int,int,int,int); // Membro de Fun��o da Classe
    // Modificador de acesso public
	public:
		void setValores(int, int, int, int); // Membro de Fun��o da Classe
		int comprimento(void); // Membro de Fun��o da Classe
		int largura(void); // Membro de Fun��o da Classe
		int perimetro(void); // Membro de Fun��o da Classe
		int area(void); // Membro de Fun��o da Classe
		bool ehquadrado(void); // Membro de Fun��o da Classe
		void imprimeDados(void); // Membro de Fun��o da Classe
};

// Implementa��o dos m�todos da classe
bool Retangulo::checar(int x1, int y1, int x2, int y2)
{
	if(x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0)
		return false;
	else if(x1 > 15 || y1 > 15 || x2 > 15 || y2 > 15)
		return false;
	else
		return true;
}
// Implementa��o dos m�todos da classe
void Retangulo::setValores(int x1, int y1, int x2, int y2)
{
	pix = x1;
	piy = y1;
	psx = x2;
	psy = y2;
}
// Implementa��o dos m�todos da classe
int Retangulo::comprimento(void)
{
	if(fabs(psx - pix) >= fabs(psy - piy))
		return fabs(psx - pix);
	else
		return fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
int Retangulo::largura(void)
{
	if(fabs(psx - pix) <= fabs(psy - piy))
		return fabs(psx - pix);
	else
		return fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
int Retangulo::perimetro(void)
{
	return 2* fabs(psx - pix) + 2 * fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
int Retangulo::area(void)
{
	return fabs(psx - pix) * fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
bool Retangulo::ehquadrado(void)
{
	if(fabs(psx - pix) == fabs(psy - piy))
		return true;
	else
		return false;
}
// Implementa��o dos m�todos da classe
void Retangulo::imprimeDados(void)
{
	cout << "O comprimento do ret�ngulo �: " << comprimento() << " u.c." << endl;
	cout << "A largura do ret�ngulo �: " << largura() << " u.l." << endl;
	cout << "O per�metro do ret�ngulo �: " << perimetro() << " u.p." << endl;
	cout << "A �rea do ret�ngulo �: " << area() << " u.a." << endl;
	
	if(ehquadrado())
		cout << "O objeto � um quadrado." << endl;
	else
		cout << "O objeto � um ret�ngulo." << endl;
	
	if(checar(pix, piy, psx, psy))
		cout << "O objeto est� no primeiro quadrante e possui lados menores que 15 u.c." << endl;
	else 
		cout << "O objeto n�o est� no primeiro quadrante ou n�o possui lados menores que 15 u.c." << endl;
}

// Fun��o principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inst�ncia ou objeto da classe
	Retangulo ret1;
	
	int x1, y1, x2, y2;
	
	cout << "Programa Calculadora de ret�ngulos." << endl << endl;
	
	cout << "Insira a coordenada x do primeiro v�rtice do tri�ngulo: ";
	cin >> x1;
	cout << "Insira a coordenada y do primeiro v�rtice do tri�ngulo: ";
	cin >> y1;
	
	cout << "Insira a coordenada x do segundo v�rtice do tri�ngulo: ";
	cin >> x2;
	cout << "Insira a coordenada y do segundo v�rtice do tri�ngulo: ";
	cin >> y2;
	
	ret1.setValores(x1, y1, x2, y2);
	
	cout << endl << endl;
	
	ret1.imprimeDados();
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal