// Implementando um construtor por default - Horario.h

#ifndef HORARIO_H
#define HORARIO_H

class Horario 
{
	public:
		Horario(int = 0, int = 0, int = 0); // Especifica todos os argumentos
		void alteraHorario(int, int, int);
		void imprUniv(void);
		void imprPadr(void);
	private:
		int hora;
		int minuto;
		int segundo;
};

#endif