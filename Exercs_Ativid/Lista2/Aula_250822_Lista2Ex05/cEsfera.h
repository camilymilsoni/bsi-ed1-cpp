#ifndef CESFERA_H
#define CESFERA_H

class cEsfera {
public:
    cEsfera();
    cEsfera(const cEsfera& orig);
    virtual ~cEsfera();
    
    void lerDados();
    float calcVolume(int);
    
   
private:

};

#endif /* CESFERA_H */

