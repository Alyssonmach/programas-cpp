// arquivo destinado a sobrecargas utilizadas no projeto

#include "Pessoa.h"

// sobrecarregando o operador de saida << para gravar um
// objeto inteiro em um Arquivo
ofstream& operator << (ofstream& arquivo, Pessoa& p)
{
  arquivo << endl << p.getNome() << endl;
  arquivo << p.getCPF() << endl;
  arquivo << p.getIdade() << endl;
  arquivo << p.getPeso();

  return arquivo;
}

// sobrecarregando o operador de entrada >> para que seja
// possivel ler um objeto inteiro em um Arquivo
ifstream& operator >> (ifstream& arquivo, Pessoa& p)
{
  string nome, cpf;
  short idade;
  float peso;

  getline(arquivo, nome);
  p.setNome(nome);
  getline(arquivo, cpf);
  p.setCPF(cpf);
  arquivo >> idade;
  p.setIdade(idade);
  arquivo >> peso;
  p.setPeso(peso);

  return arquivo;
}
