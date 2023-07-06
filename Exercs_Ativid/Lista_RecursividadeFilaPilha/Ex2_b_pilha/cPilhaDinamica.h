#ifndef CPILHADINAMICA_H
#define CPILHADINAMICA_H

class cPilhaDinamica {
public:
    cPilhaDinamica();
    cPilhaDinamica(const cPilhaDinamica& orig);
    virtual ~cPilhaDinamica();
    
    struct nodo{
	int elem;
	struct nodo *ant;
    } *topo, *aux;
    
    bool vazio(struct nodo *campo);
    void insere();
    void removr();
    void listar();
    void menu();
    void verificarMeio();
    
private:

};

#endif /* CPILHADINAMICA_H */

