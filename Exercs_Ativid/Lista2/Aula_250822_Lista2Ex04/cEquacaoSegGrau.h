#ifndef CEQUACAOSEGGRAU_H
#define CEQUACAOSEGGRAU_H

class cEquacaoSegGrau {
public:
    cEquacaoSegGrau();
    cEquacaoSegGrau(const cEquacaoSegGrau& orig);
    virtual ~cEquacaoSegGrau();
    
    void lerValores();
    float calculo(int, int, int);
    
    
private:

};

#endif /* CEQUACAOSEGGRAU_H */

