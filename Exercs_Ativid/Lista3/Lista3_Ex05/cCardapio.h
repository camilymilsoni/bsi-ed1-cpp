#ifndef CCARDAPIO_H
#define CCARDAPIO_H

class cCardapio {
public:
    cCardapio();
    cCardapio(const cCardapio& orig);
    virtual ~cCardapio();
    
    void lerPedido();
    float calcularPedido(float, float, float, float, float, float);
    
private:

};

#endif /* CCARDAPIO_H */

