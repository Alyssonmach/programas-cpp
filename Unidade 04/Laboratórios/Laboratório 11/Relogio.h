// Implementando um programa que simula um relógio digital - Relogio.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 04 - Laboratório 11

#ifndef RELOGIO_H
#define RELOGIO_H

// Criando uma classe Relogio
class Relogio 
{
	// Especificador de acesso private
	private:
		// Membros de dados da classe
		int hora, minuto, segundo;
    // Especificador de acesso public
	public:
		// Construtor da classe
		Relogio(void);
		// Membros de função da classe
		void setHora(int, int, int);
		void getHora(int*, int*, int*);
		void passaSegundo(void);
};

#endif