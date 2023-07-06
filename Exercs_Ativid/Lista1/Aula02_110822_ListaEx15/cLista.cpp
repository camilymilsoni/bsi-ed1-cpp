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
    
    cout << "Informe um número inteiro: ";
    cin >> this->num;
    
}

void cLista::numero(){
    
    if(this->num >= 0){
        if(this->num % 2 == 0){
            cout << "O número informado é par e positivo.";
        }
        else{
            cout << "O número informado é ímpar e positivo.";
        }  
    }
    else{
        if(this->num % 2 == 0){
            cout << "O número informado é par e negativo.";
        }
        else{
            cout << "O número informado é ímpar e negativo.";
        }
    }
    
}