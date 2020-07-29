// Figura 3.9: GradeBook.h
// Definição da classe GradeBook em um arquivo main separado
#include <iostream>

using std::cout;
using std::endl;

#include <string> // A classe GradeBook utiliza a classe de string padrão C++

using std::string;

// Definição da classe GradeBook
class GradeBook
{
	public:
		// O construtor inicializa courseName com a string fornecida como argumnento
		GradeBook(string name)
		{
			setCourseName(name); // chama a função set para inicializar courseName
		} // Fim do construtor GradeBook
		
		// Função para configurar o nome do curso
		void setCourseName(string name)
		{
			courseName = name; // Armazena o nome do curso no objeto
		} // Fim da função getCourseName
		
		// Função para obter o nome do curso
		string getCourseName()
		{
			return courseName; // Retorna courseName do objeto
		} // Fim da função getCourseName
		
		// Exibe uma mensagem de boas-vindas para o usuário GradeBook
		void displayMesssage()
		{
			// chama getCourseName para obter o nome do curso
			cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl; 
		} // Fim da função displayMessage
		
	private:
		string courseName; // Nome do curso para esse GradeBook
}; // Fim da classe GradeBook
