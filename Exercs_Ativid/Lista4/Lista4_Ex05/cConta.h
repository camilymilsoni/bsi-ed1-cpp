#ifndef CCONTA_H
#define CCONTA_H
#include <iostream>
#include <string>

using namespace std;

struct cliente{
    
    string nome;
    long int cpf;
    
};

struct conta{
    
    float saldo;
    
};

class cConta {
public:
    cConta();
    cConta(const cConta& orig);
    virtual ~cConta();
    
    void lerDados();
    void saque(cliente Cliente[], conta Conta[]);
    void deposito(cliente Cliente[], conta Conta[]);
    int pesquisaSequencial(cliente Cliente[], int cpf);
    
private:

};

#endif /* CCONTA_H */

