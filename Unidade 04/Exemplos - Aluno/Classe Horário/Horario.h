#ifndef Horario_H // Código de pré-processador a evitar inclusões múltiplas
#define Horario_H

class Horario
{
	private:
		int hora, minuto, segundo;
	public:
		Horario(void);
		void alteraHorario(int, int, int);
		void imprUniv(void);
		void imprPadrao(void);
};

#endif