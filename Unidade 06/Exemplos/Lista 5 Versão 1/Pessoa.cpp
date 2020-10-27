#include "Pessoa.h"

Pessoa::Pessoa(){//Inicializa as struct e os atributos simples da classe Pessoa
                 DataNasc.dia=0;
                 DataNasc.mes=0;
                 DataNasc.ano=0;
                 nome = " ";
                 CPF =00000000000;
                 Endereco.rua=" ";
                 Endereco.numero=0;
                 Endereco.bairro=" ";
                 Endereco.CEP=0;

}

void Pessoa::setNome(string n){
     nome = n;
}

void Pessoa::setCPF (long int cpf){
     CPF = cpf;
}

void Pessoa::setEndereco(string r, int n, string b, int cep){
     
     Endereco.rua=r;
     Endereco.numero=n;
     Endereco.bairro=b;
     Endereco.CEP=cep;     
}


void Pessoa::setdataNasc(int d,int m,int a){
     
     DataNasc.dia=d;
     DataNasc.mes=m;
     DataNasc.ano=a;
}
     
string Pessoa::getNome(){
       return nome;
}

long int Pessoa::getCPF(){
       return CPF;
}

data Pessoa::getDataNasc(){
     return DataNasc;
}

endereco Pessoa::getEndereco(){
    return Endereco;
}
