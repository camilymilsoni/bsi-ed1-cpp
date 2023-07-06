#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerNum(){
    
    float a = 0, b = 0, c = 0;
    
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    cout << "Informe o valor de c: ";
    cin >> c;
    
    cout << "O maior valor dentre os três digitados é: " << maiorNum(a, b, c);
    
}

float cLista::maiorNum(float a, float b, float c){
    
    float maior;
    
    maior = a;
    
    if ((b > a) && (b > c)){
        maior = b;
    }
    else if((c > a) && (c > b)){
        maior = c;
    }
    
    return maior;
    
}