#ifndef CFILAESTATICA_H
#define CFILAESTATICA_H

class cFilaEstatica {
public:
    cFilaEstatica();
    cFilaEstatica(const cFilaEstatica& orig);
    virtual ~cFilaEstatica();
    
    void lerDados();
    void menu(int qtd_elementos, int fila[]);
    int push(int inicio, int qtd_elementos, int fila[]);
    int pop(int inicio, int fila[]);
    void imprimir(int inicio, int fila[]);
    
private:

};

#endif /* CFILAESTATICA_H */

