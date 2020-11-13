#ifndef LISTA_H
#define LISTA_H

#include "Pessoa.h"

class lista
{
  private:
    vector<Pessoa> lista_p;
  public:
    Lista();
    ~Lista();
    bool inserirPessoa(Pessoa);
    bool salvaLista();
    bool pesquisarPorNome(string) const;
    bool pesquisarPorPosicao(unsigned) const;
    bool removerPorCPF(string);
    void imprimirLista(void) const;
    void imprimirListaOrdenada(void) const;
};

#endif
