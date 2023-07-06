#ifndef CFILADINAMICA_H
#define CFILADINAMICA_H


struct nodo{
        int elem;
        struct nodo *prox;
    };


class cFilaDinamica {
public:
    cFilaDinamica();
    cFilaDinamica(const cFilaDinamica& orig);
    virtual ~cFilaDinamica();
    
    struct nodo{
        int elem;
        struct nodo *prox;
    }*inicio, *fim, *aux;
    
    void inserir();
    void listar();
    bool vazio(struct nodo *campo);
    void remover();
    void menu();
    bool verificarElemento(int x);
    
private:

};

#endif /* CFILADINAMICA_H */

