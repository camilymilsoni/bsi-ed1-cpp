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
    
    float saldo = 0;
    
    cout << "Informe o saldo médio: ";
    cin >> saldo;
    
    cout << "O saldo médio é: " << saldo << endl;
    cout << "O valor do crédito é: " << dados(saldo) << endl;
    
}

float cLista::dados(float saldo){
    
    float credito = 0;
    
    if((saldo >= 0) && (saldo <= 200)){
        credito = 0;
    }
    else if((saldo >= 201) && (saldo <= 400)){
        credito = 0.2 * saldo;
    }
    else if((saldo >= 401) && (saldo <= 600)){
        credito = 0.3 * saldo;
    }
    else if(saldo >= 601){
        credito = 0.4 * saldo;
    }
    
    return credito;
    
}