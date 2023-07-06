#ifndef CALTURA_H
#define CALTURA_H

class cAltura {
public:
    cAltura();
    cAltura(const cAltura& orig);
    virtual ~cAltura();
    
    void lerAlturas();
    float calcMaior(float, float);
    float calcMenor(float, float);
    
private:

};

#endif /* CALTURA_H */

