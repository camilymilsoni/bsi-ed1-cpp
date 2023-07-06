#ifndef CPILHA_H
#define CPILHA_H

class cPilha {
public:
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    struct nodo{
        int elem;
        struct nodo *ant;
    }*topo, *aux;
    
    void inserir();
    void imprimirPilhaRecursividade(struct nodo *topo);
    
private:

};

#endif /* CPILHA_H */

