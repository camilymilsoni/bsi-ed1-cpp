#ifndef CFILAVERIFICACAO_H
#define CFILAVERIFICACAO_H

class cFilaVerificacao {
public:
    cFilaVerificacao();
    cFilaVerificacao(const cFilaVerificacao& orig);
    virtual ~cFilaVerificacao();
    
    struct nodo{
        int elem;
        struct nodo *prox;
    }*inicio, *fim, *aux;
    
    void inserir();
    bool pesquisar(int);
    void menu();
    
private:

};

#endif /* CFILAVERIFICACAO_H */

