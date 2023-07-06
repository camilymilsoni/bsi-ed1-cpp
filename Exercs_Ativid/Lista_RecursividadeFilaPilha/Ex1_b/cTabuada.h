#ifndef CTABUADA_H
#define CTABUADA_H

class cTabuada {
public:
    cTabuada();
    cTabuada(const cTabuada& orig);
    virtual ~cTabuada();
    
    void lerDados();
    int calculoTabuada(int, int);
    void mostrarTabuada(int, int);
    
private:

};

#endif /* CTABUADA_H */

