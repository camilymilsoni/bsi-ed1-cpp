#ifndef CLISTA_H
#define CLISTA_H

class cLista {
public:
    cLista();
    cLista(const cLista& orig);
    virtual ~cLista();
    
    void lerDados();
    float pesoIdeal(char, float);
    
private:

};

#endif /* CLISTA_H */