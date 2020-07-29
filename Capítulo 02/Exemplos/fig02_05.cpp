// Figura 2.5: fig02_05.cpp
// Programa de adição que exibe a soma de dois números
#include <iostream> // Permite ao programa realizar entrada e saída

// A função main inicia a execução do programa
int main()
{
	// Declaração de variáveis
	int number1; // Primeiro inteiro a adicionar
	int number2; // Segundo inteiro a adicionar
	int sum; // Soma de number1 e number2
	
	std::cout << "Enter first Integer: "; // Solicita dados ao usuário
	std::cin >> number1; // Lê o primeiro inteiro inserido pelo usuário em number1
	
	std::cout << "Enter second Integer: "; // Solicita dados ao usuário
	std::cin >> number2; // Lê o segundo inteiro inserido pelo usuário em number2
	
	sum = number1 + number2; // Adiciona os números; Armazena os resultados em sum
	
	std::cout << "Sum is " << sum << std::endl; // Exibe sum; termina linha
	
	return 0; // Indica que o programa terminou com sucesso
	
} // Fim da função main