#ifndef CPILHAPOSICAO_H
#define CPILHAPOSICAO_H

class cPilhaPosicao {
public:
    cPilhaPosicao();
    cPilhaPosicao(const cPilhaPosicao& orig);
    virtual ~cPilhaPosicao();
    
    struct nodo{
	int elem;
	struct nodo *ant;
    } *topo, *aux;
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    void menu(void);
    int elementoMeio();
    
private:

};

#endif /* CPILHAPOSICAO_H */

