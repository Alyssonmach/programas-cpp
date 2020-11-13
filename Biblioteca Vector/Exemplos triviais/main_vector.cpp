#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> num; // alocacao dinamica de memoria
    vector<int> num2; // alocacao dinamica de memoria
    int tam;

    num.push_back(20); // adiciona um elemento ao vetor
    num.push_back(2); // adiciona um elemento ao vetor
    num.push_back(5); // adiciona um elemento ao vetor

    num2.push_back(2); // adiciona um elemento ao vetor
    num2.push_back(5); // adiciona um elemento ao vetor
    num2.push_back(6); // adiciona um elemento ao vetor

    // visualiza o tamanho do vector
    tam = num.size();

    cout << "Tamanho do vector: " << tam << endl;

    // visualiza os dados do vector
    for(unsigned i(0); i < num.size(); i++)
    {
        cout << num[i] << endl;
    }
    cout << endl;

    // visualiza os dados do vector
    for(unsigned i(0); i < num2.size(); i++)
    {
        cout << num2[i] << endl;
    }
    cout << endl;
    
    num2.swap(num); // troca os elementos de um vector
	
	// visualiza os dados do vector
    for(unsigned i(0); i < num2.size(); i++)
    {
        cout << num2[i] << endl;
    }
    cout << endl;
    
    // acessa valores especificos
    cout << "Primeiro valor de num: " << num.front() << endl;
    cout << "Ultimo valor de num: " << num.back() << endl;
    cout << "Valor do meio de num: " << num.at(num.size() / 2) << endl;
    cout << endl;

    // deleta elementos de um vector
    num.erase(num.begin() - 1);
    
    // visualiza os dados do vector
    for(unsigned i(0); i < num.size(); i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}