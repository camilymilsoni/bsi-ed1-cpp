#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <string>
#include <iostream>

using namespace std;

class cTriangulo {
public:
    cTriangulo();
    cTriangulo(const cTriangulo& orig);
    virtual ~cTriangulo();
    
    void lerValores();
    string verificTriang(int, int, int);
    
private:

};

#endif /* CTRIANGULO_H */

