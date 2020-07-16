// Figura 2.2: fig02_02.cpp
// Autor: Alysson Machado
// Horário: 10:13 AM
// Programa sequências de escape
#include <iostream> // Permite ao programa realizar entrada e saída
#include <locale> // Permite localizar programas
 
// A função main inicia a execução do programa
int main()
{
	
	setlocale(LC_ALL, "Portuguese"); // Adaptação do programa ao idioma desejado
	
	std::cout << "Nova Linha\n"; // Exibe a mensagem
	std::cout << "\tTabulação Horizontal"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "        de Carro\rRetorno"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Alerta\a"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Barras Invertidas \\"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Aspas Simples \'"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Aspas Duplas \""; // Exibe a mensagem
	
	return 0; // Indica que o programa terminou com sucesso
} // Fim da função main
