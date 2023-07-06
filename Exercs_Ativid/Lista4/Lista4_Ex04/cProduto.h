#ifndef CPRODUTO_H
#define CPRODUTO_H
#include <iostream>
#include <string>

using namespace std;

struct produto{
    string nome;
    float preco;
    int codigo;
};

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void lerDados();
    void imprimirLista(produto Produto[], int);
    float consultaProduto(produto Produto[], int, int);
    
private:

};

#endif /* CPRODUTO_H */

