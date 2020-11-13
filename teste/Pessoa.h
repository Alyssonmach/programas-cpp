#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
  private:
    string nome;
    string cpf;
    short idade;
    float peso;
  public:
    Pessoa();
    Pessoa(string, string, short, float);
    void setNome(string);
    void setCPF(string);
    void setIdade(short);
    void setPeso(float);
    string getNome(void) const;
    string getCPF(void) const;
    short getIdade(void) const;
    float getPeso(void) const;
    void imprimeDados(void) const;
};

#endif
