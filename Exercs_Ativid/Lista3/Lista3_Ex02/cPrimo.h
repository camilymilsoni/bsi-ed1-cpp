#ifndef CPRIMO_H
#define CPRIMO_H
#include <iostream>
#include <string>

using namespace std;

class cPrimo {
public:
    cPrimo();
    cPrimo(const cPrimo& orig);
    virtual ~cPrimo();
    
    void lerNum();
    string verificNum(int);
    
private:

};

#endif /* CPRIMO_H */

