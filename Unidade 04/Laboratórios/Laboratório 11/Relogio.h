// Implementando um programa que simula um rel�gio digital - Relogio.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 11

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
		// Membros de fun��o da classe
		void setHora(int, int, int);
		void getHora(int*, int*, int*);
		void passaSegundo(void);
};

#endif