#include "cEsfera.h"
#include <iostream>
#include <cmath>

using namespace std;

cEsfera::cEsfera() {
}

cEsfera::cEsfera(const cEsfera& orig) {
}

cEsfera::~cEsfera() {
}

void cEsfera::lerDados(){
    
    int raio = 0;
    
    cout << "Informe um valor para o raio da esfera: ";
    cin >> raio;
    
    cout << "O volume da esfera é: " << calcVolume(raio);
    
}

float cEsfera::calcVolume(int raio){
    
    float volume = 0;
    
    volume = (4/3 * 3.14 * pow(raio, 3));
    
    return volume;
           
    
}