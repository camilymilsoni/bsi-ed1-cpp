#ifndef CLISTA_H
#define CLISTA_H

class cLista {
public:
    
    cLista(); //Método construtor - serve para instanciar objetos
    cLista(const cLista& orig);
    virtual ~cLista();
    
    int x1, x2, y1, y2;
    
    void lerDados();
    float calcularD();
    
private:

};

#endif /* CLISTA_H */