// Figura 2.9: fig02_09.cpp
// Programa de cálculos aritméticos
#include <iostream> // Permite ao programa realizar entrada e saída

// A função main inicia a execução do programa
int main()
{
	// Declaração de variáveis
	int number1; // Primeiro inteiro a adicionar
	int number2; // Segundo inteiro a adicionar
	int sum; // Soma de number1 e number2
	int subtraction; // Subtração de number1 e number2
	int division; // Divisão de number1 e number2
	int multiplication; // Multiplicação de number1 e number2
	int module; // Módulo de number1 e number2
	 
	std::cout << "Enter first Integer: "; // Solicita dados ao usuário
	std::cin >> number1; // Lê o primeiro inteiro inserido pelo usuário em number1
	
	std::cout << "Enter second Integer: "; // Solicita dados ao usuário
	std::cin >> number2; // Lê o segundo inteiro inserido pelo usuário em number2
	
	sum = number1 + number2; // Adiciona os números; Armazena os resultados em sum
	subtraction = number1 - number2; // Subtraí os números; Armazena os resultados em subtraction
	division = number1 / number2; // Divide os números; Armazena os resultados em division
	multiplication = number1 * number2; // Multiplica os números; Armazena os resultados em multiplication
	module = number1 % number2; // Módulo dos números; Armazena os resultados em module
	
	std::cout << "Sum is " << sum << std::endl; // Exibe sum; termina linha
	std::cout << "Subtraction is " << subtraction << std::endl; // Exibe subtraction; termina linha
	std::cout << "Division is " << division << std::endl; // Exibe division; termina linha
	std::cout << "Multiplication is " << multiplication << std::endl; // Exibe multiplication; termina linha
	std::cout << "Module is " << module << std::endl; // Exibe module; termina linha
	
	return 0; // Indica que o programa terminou com sucesso
	
} // Fim da função main