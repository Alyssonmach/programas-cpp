// Programa identificador de disciplinas usando enumeradores - un01_lab02.cpp

// Unidade 01 - Laborat�rio de Programa��o 02

// Importando a biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Importando a biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Fun��o principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Apresenta��o da finalidade do programa
	cout << "Programa enumera��o de disciplinas." << endl << endl;
	
	// Definindo uma enum
	enum disciplinas {Equacoes_diferenciais = 12345, Circuitos_logicos = 23453, 
	                  Lab_circuitos_logicos = 67823, Tecnicas_de_programacao = 19783,
					  Mecanica_geral_i = 56783};

    // Imprime a enumera��o de cada uma dasdas disciplinas
    cout << "Disciplinas 2020.3:" << endl;
	cout << "Equa��es Diferenciais: " << Equacoes_diferenciais << endl;
	cout << "Circuitos L�gicos: " << Circuitos_logicos << endl;
	cout << "Laborat�rio de Circuitos L�gicos: " << Lab_circuitos_logicos << endl;
	cout << "T�cnicas de Programa��o: " << Tecnicas_de_programacao << endl;
	cout << "Mec�nica Geral I: " << Mecanica_geral_i << endl; 
					  
    
	// Programa terminou com sucesso
	return 0;
} // Fim da fun��o main