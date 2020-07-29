// Figura 3.10: fig03_10.cpp
// Incluindo a classe GradeBook a partir do arquivo GradeBook.h para uso em main
#include <iostream>

using std::cout;
using std::endl;

#include "GradeBook.h" // Inclui a definição da classe GradeBook

// A função main inicia a execução do programa
int main()
{
	// Cria dois objetos GradeBook
	GradeBook gradebook1("CS101 Introduction to C++ Programming");
	GradeBook gradebook2("CS102 Data Structures in C++");
	
	// exibe valor inicial de courseName para cada GradeBookgetCourseName
	cout << "gradeBook1 created for course: " << gradebook1.getCourseName();
	cout << "\ngradeBook2 created for course: " << gradebook2.getCourseName();
	
	cout << endl; // Imprime uma linha em branco
	
	return 0; // Indica terminação bem-sucedida
} // Fim da main