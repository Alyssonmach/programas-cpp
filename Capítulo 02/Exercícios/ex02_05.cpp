// Exercício 2.5: ex02_05.cpp
// Data: 20/07/2020
// Horário: 14:58 PM
// Calcula o produto de três inteiros
#include <iostream> // Permite ao programa realizar entrada e saída

using std::cout; // O programa utiliza cout
using std::cin; // O programa utiliza cin
using std::endl; // O programa utiliza endl

// A função main inicia a execução do programa
int main()
{
	int x; // Primeiro inteiro a multiplicar
	int y; // Segundo inteiro a multiplicar
	int z; // Terceiro inteiro a multiplicar
	int result; // O produto de três inteiros;
	
	cout << "Enter three integers: "; // Solicita dados ao usuário
	cin >> x >> y >> z; // Lê três inteiros do usuário
	result = x * y * z; // Multiplica os três inteiros; atribui a result
	cout << "The product is " << result << endl; // Imprime resultado; termina linha
	
	return 0; // Indica que o programa terminou com sucesso
} // Fim da função main

