#ifndef CRECURSIVIDADE_H
#define CRECURSIVIDADE_H

class cRecursividade {
public:
    cRecursividade();
    cRecursividade(const cRecursividade& orig);
    virtual ~cRecursividade();
    
    void lerDados();
    int fatorial(int);
    
private:

};

#endif /* CRECURSIVIDADE_H */

