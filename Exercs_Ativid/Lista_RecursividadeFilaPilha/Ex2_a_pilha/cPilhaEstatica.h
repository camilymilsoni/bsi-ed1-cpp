#ifndef CPILHAESTATICA_H
#define CPILHAESTATICA_H

class cPilhaEstatica {
public:
    cPilhaEstatica();
    cPilhaEstatica(const cPilhaEstatica& orig);
    virtual ~cPilhaEstatica();
    
    void lerDados();
    void menu(int qtd_elementos, int pilha[]);
    int push(int topo, int qtd_elementos, int pilha[]);
    int pop(int topo);
    void imprimir(int topo, int pilha[]);
    
private:

};

#endif /* CPILHAESTATICA_H */

