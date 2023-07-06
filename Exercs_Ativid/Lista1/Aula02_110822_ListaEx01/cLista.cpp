#include "cLista.h"
#include <iostream>
#include <math.h>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerDados(){
    
    cout << "Informe o valor de x1: ";
    cin >> this->x1;
    cout << "Informe o valor de y1: ";
    cin >> this->y1;
    cout << "Informe o valor de x2: ";
    cin >> this->x2;
    cout << "Informe o valor de y2: ";
    cin >> this->y2;
    
    cout << "A distância é: " << this->calcularD();
    
}

float cLista::calcularD(){
    
    float d = 0;
    
    d = sqrt(pow((this->x2 - this->x1), 2) + pow((this->y2 - this->y1), 2));
    
    return d;
    
}