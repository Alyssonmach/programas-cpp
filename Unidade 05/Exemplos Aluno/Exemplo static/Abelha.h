// Usando static para retornar total de objeto - Abelha.h

#ifndef ABELHA_H
#define ABELA_H

#include <string>
using std::string;

class Abelha
{
	private:
		string nome_abelha;
		static int total_abelha;
	public:
		Abelha(void);
		Abelha(string);
		~Abelha(void);
		static int totalAbelhas(void)
		{
			return total_abelha;
		}
		string nome(void);
		void setNome(string);
};

#endif
