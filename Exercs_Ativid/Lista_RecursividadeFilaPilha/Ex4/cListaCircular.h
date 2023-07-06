#ifndef CLISTACIRCULAR_H
#define CLISTACIRCULAR_H

class cListaCircular {
public:
    cListaCircular();
    cListaCircular(const cListaCircular& orig);
    virtual ~cListaCircular();
    
    struct nodo{
        struct nodo *ant;
        int elem;
        struct nodo *prox;
    }*aux, *inicio, *fim;
    
    void inserir();
    void menu();
    void listar();
    bool vazio(struct nodo *campo);
    void remover();
    
private:

};

#endif /* CLISTACIRCULAR_H */

