// Programa identificador de disciplinas usando enumeradores - un01_lab02.cpp

// Aluno: Alysson Machado de Oliveira Barbosa
// Unidade 01 - Laboratório de Programação 02

// Importando a biblioteca padrão de entrada e saída de dados
#include <iostream>
// Importando a biblioteca padrão de localização de arquivos
#include <locale>

// Acessa as funções das bibliotecas padrão
using namespace std;

// Função principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Apresentação da finalidade do programa
	cout << "Programa enumeração de disciplinas." << endl << endl;
	
	// Definindo uma enum
	enum disciplinas {Equacoes_diferenciais = 12345, Circuitos_logicos = 23453, 
	                  Lab_circuitos_logicos = 67823, Tecnicas_de_programacao = 19783,
					  Mecanica_geral_i = 56783};

    // Imprime a enumeração de cada uma dasdas disciplinas
    cout << "Disciplinas 2020.3:" << endl;
	cout << "Equações Diferenciais: " << Equacoes_diferenciais << endl;
	cout << "Circuitos Lógicos: " << Circuitos_logicos << endl;
	cout << "Laboratório de Circuitos Lógicos: " << Lab_circuitos_logicos << endl;
	cout << "Técnicas de Programação: " << Tecnicas_de_programacao << endl;
	cout << "Mecânica Geral I: " << Mecanica_geral_i << endl; 
					  
    
	// Programa terminou com sucesso
	return 0;
} // Fim da função main