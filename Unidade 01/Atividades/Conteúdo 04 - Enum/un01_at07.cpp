// Programa identificador de disciplinas - un01_at07.cpp

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
	enum disciplinas {Equacoes_diferenciais = 3, Circuitos_logicos = 4, 
	                  Lab_circuitos_logicos = 2, Tecnicas_de_programacao = 4,
					  Mecanica_geral_i = 3};

    // Imprime a enumeração das disciplinas
    cout << "Disciplinas 2020.3:" << endl;
	cout << "Equações Diferenciais: " << Equacoes_diferenciais << endl;
	cout << "Circuitos Lógicos: " << Circuitos_logicos << endl;
	cout << "Laboratório de Circuitos Lógicos: " << Lab_circuitos_logicos << endl;
	cout << "Técnicas de Programação: " << Tecnicas_de_programacao << endl;
	cout << "Mecânica Geral I: " << Mecanica_geral_i << endl; 
					  
    
	// Programa terminou com sucesso
	return 0;
} // Fim da função main