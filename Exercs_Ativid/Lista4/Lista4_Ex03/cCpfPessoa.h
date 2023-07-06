#ifndef CCPFPESSOA_H
#define CCPFPESSOA_H
#include <iostream>
#include <string>

using namespace std;

struct pessoa{
    string nome;
    long int cpf;
};

class cCpfPessoa {
public:
    cCpfPessoa();
    cCpfPessoa(const cCpfPessoa& orig);
    virtual ~cCpfPessoa();
    
    void lerDados();
    void pesquisaPessoa(pessoa Pessoa[], int, int);
    int pesquisaSequencial(pessoa Pessoa[], int, int);
    int pesquisaBinaria(pessoa Pessoa[], int, int);
    void bolha(pessoa Pessoa[], int, int);
    
private:

};

#endif /* CCPFPESSOA_H */

