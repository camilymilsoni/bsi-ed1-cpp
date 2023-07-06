#ifndef CLISTA_H
#define CLISTA_H

class cLista {
public:
    cLista();
    cLista(const cLista& orig);
    virtual ~cLista();
    
    //O que é criado no .h é Atributo e não variável
    //Atributo não sofre variação durante a execução do sistema, sofre apenas atualizações no banco de dados
    
    void lerDados();
    float precoT(int codigo, int qtd);
    
private:

};

#endif /* CLISTA_H */