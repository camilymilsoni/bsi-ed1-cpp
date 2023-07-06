#include "cEquacaoSegGrau.h"
#include <iostream>

using namespace std;

cEquacaoSegGrau::cEquacaoSegGrau() {
}

cEquacaoSegGrau::cEquacaoSegGrau(const cEquacaoSegGrau& orig) {
}

cEquacaoSegGrau::~cEquacaoSegGrau() {
}

void cEquacaoSegGrau::lerValores(){
    
    int a = 0, b = 0, c = 0;
    
    cout << "Informe o valor do coeficiente a: ";
    cin >> a;
    cout << "Informe o valor do coeficiente b: ";
    cin >> b;
    cout << "Informe o valor do coeficiente c: ";
    cin >> c;
    
    cout << "O delta dos valores informados é: " << calculo(a, b, c);
    
}

float cEquacaoSegGrau::calculo(int a, int b, int c){
    
    float delta = 0;
    
    delta = (b*b - 4 * a * c);
    
    return delta;
    
    
}