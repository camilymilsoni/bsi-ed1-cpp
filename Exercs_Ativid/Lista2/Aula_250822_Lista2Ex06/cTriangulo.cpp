#include "cTriangulo.h"
#include <iostream>
#include <string>

using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo::lerValores(){
    
    int x = 0, y = 0, z = 0;
    
    cout << "Informe o valor para x: ";
    cin >> x;
    cout << "Informe o valor para y: ";
    cin >> y;
    cout << "Informe o valor para z: ";
    cin >> z;
    
    cout << verificTriang(x, y, z);
    
}

string cTriangulo::verificTriang(int x, int y, int z){
    
    if((x < y + z) && (y < x + z) && (z < x + y)){
        if((x == y) && (y == z)){
            return "O triângulo é equilátero.";
        }
        else{
            if((x != y) && (x != z) && (y != z)){
                return "O triângulo é escaleno.";
            }
            else{
                return "O triângulo é isósceles.";
            }
        }
        
    }
    else{
        return "Os valores informados não podem formar um triângulo.";
    }

    
    
}