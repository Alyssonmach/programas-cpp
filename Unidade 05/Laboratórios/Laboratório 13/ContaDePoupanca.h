// Implementando um programa que simula uma conta de poupan�a - ContaDePoupanca.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 13 

#ifndef CONTADEPOUPANCA_H
#define CONTADEPOUPANCA_H

// Classe ContaDePoupanca
class ContaDePoupanca 
{
	// Modificador de Acesso public
	public:
		ContaDePoupanca(void);
		ContaDePoupanca(float);
		 // Membro de fun��es da classe
		 void calculeRendimentoMensal(void);
		 static void modifiqueTaxaDeJurosAnual(float taxa)
		 {
			taxaDeJurosAnual = (taxa >= 0) ? taxa : taxaDeJurosAnual;
		 }
		 static float getTaxaDeJurosAnual(void)
		 {
			return taxaDeJurosAnual;
		 }
		 void setSaldoDaPoupanca(float);
		 float getSaldoDaPoupanca() const;
	// Modificador de Acesso private	 
	private:
		// Membro de dados da classe
		static float taxaDeJurosAnual;
		float saldoDaPoupanca;
};

#endif