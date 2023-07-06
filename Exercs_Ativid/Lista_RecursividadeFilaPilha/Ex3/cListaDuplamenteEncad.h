#ifndef CLISTADUPLAMENTEENCAD_H
#define CLISTADUPLAMENTEENCAD_H

class cListaDuplamenteEncad {
public:
    cListaDuplamenteEncad();
    cListaDuplamenteEncad(const cListaDuplamenteEncad& orig);
    virtual ~cListaDuplamenteEncad();
    
    struct nodo{
        struct nodo *ant;
        int elem;
        struct nodo *prox;
    }*aux, *inicio, *fim;
    
    void inserir();
    void menu();
    void listar();
    void remover();
    bool vazio(struct nodo *campo);
    void inserirMeio();
    void removerMeio();
    
private:

};

#endif /* CLISTADUPLAMENTEENCAD_H */

