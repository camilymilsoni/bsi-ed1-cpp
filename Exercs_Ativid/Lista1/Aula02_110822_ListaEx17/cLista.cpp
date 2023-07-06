#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerDados(){
    
    float altura = 0;
    char sexo;
    
    cout << "Informe o sexo: ";
    cin >> sexo;
    cout << "Informe a altura: ";
    cin >> altura;
    
    cout << "O peso ideal é: " << pesoIdeal(sexo, altura);
    
}

float cLista::pesoIdeal(char sexo, float altura){
    
    float p = 0;
    
    if((sexo == 'M') || (sexo == 'm')){
        p = ((72.7 * altura) - 58);
    }
    else if((sexo == 'F') || (sexo == 'f')){
        p = ((62.1 * altura) - 44.7);
    }
    
    return p;
    
}