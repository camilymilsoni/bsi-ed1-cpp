#ifndef CPESSOA_H
#define CPESSOA_H
#include <string>
#include <iostream>

using namespace std;


struct pessoa{
    string nome, end;
    long int tel1, cpf;
};


class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void cadPessoa();
    void impDadosPessoa(pessoa vet[], int n);
    struct pessoa buscarTelefone();
    void bolha(pessoa Vetpessoas[], int n);
    
    
private:

};

#endif /* CPESSOA_H */

