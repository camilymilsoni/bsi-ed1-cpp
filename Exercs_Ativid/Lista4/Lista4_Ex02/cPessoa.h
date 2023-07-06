#ifndef CPESSOA_H
#define CPESSOA_H
#include <iostream>
#include <string>

using namespace std;

struct pessoa{
    string nome;
    float altura, peso;
    long int cpf;
    char sexo[1];
};

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void lerDados();
    void imprimirDados(pessoa Pessoas[], int, int);
    int localizaCpf(pessoa Pessoas[], int, int);
    
private:

};

#endif /* CPESSOA_H */

