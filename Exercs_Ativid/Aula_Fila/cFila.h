#ifndef CFILA_H
#define CFILA_H

class cFila {
public:
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    
    struct nodo{
        int elem;
        struct nodo *prox;
    }*inicio, *fim, *aux;
    
    void inserir();
    void listar();
    bool vazio(struct nodo *campo);
    void remover();
    void menu();
    
private:

};

#endif /* CFILA_H */

