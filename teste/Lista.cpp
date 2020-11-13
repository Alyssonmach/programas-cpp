#include "Lista.h"
#include "Sobrecargas.h"

Lista::Lista()
{
  Pessoa p;
  // criando um arquivo apenas para leitura
  ifstream arquivo;
  // abrindo o arquivo de leitura
  arquivo.open("Lista_de_pessoas.txt");

  // verificando se o arquivo foi aberto
  if(arquivo.is_open())
  {
    // enquando for diferente de end of file repete
    while (!arquivo.eof()) {
      // ignorando o caractere de quebra de linha que
      // esta entre cada objeto
      arquivo.ignore();
      // utilizando sobrecarga do operador >> para
      // inicializar o objeto
      arquivo >> p;
      // adicionando o objeto a lista
      lista_p.push_back(p);
    }
  }
  // fechando o arquivo de leitura
  arquivo.close();
}

Lista::~Lista()
{
  // salvando a lista no destrutor
  salvarLista();
}

bool Lista::inserirPessoa(Pessoa p)
{
  for(unsigned i(0); i < lista_p.size(); i++)
  {
    // verificando se o cadastro e unico
    if(lista_p[i].getCPF() == p.getCPF())
    {
      return false;
    }
  }

  lista_p.push_back(p);
  return true;
}

bool Lista::salvarLista()
{
  // criando um arquivo para salvar a lista
  ofstream arquivo;

  // utilizando o modo de abertura trunc, que abre e apaga
  // os dados anteriores armazenados nele
  arquivo.open("Lista_de_pessoas.txt", std::ios::trunc);

  if(arquivo.is_open())
  {
    for(unsigned i(0); i < lista_p.size(); i++)
    {
      // utilizando a sobrecarga do operador << para gravar os
      // objetos no arquivo
      arquivo << lista_p[i];
    }

    return true;
  }
  else
  {
    return false;
  }

  arquivo.close();
}
