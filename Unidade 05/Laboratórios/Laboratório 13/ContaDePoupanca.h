// Implementando um programa que simula uma conta de poupança - ContaDePoupanca.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 03 - Laboratório 13 

#ifndef CONTADEPOUPANCA_H
#define CONTADEPOUPANCA_H

// Classe ContaDePoupanca
class ContaDePoupanca 
{
	// Modificador de Acesso public
	public:
		ContaDePoupanca(void);
		ContaDePoupanca(float);
		 // Membro de funções da classe
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