#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerIdade(){
    
    int anos = 0, meses = 0, dias = 0;
    
    cout << "Informe a idade em anos: ";
    cin >> anos;
    cout << "Informe a idade em meses: ";
    cin >> meses;
    cout << "Informe a idade em dias: ";
    cin >> dias;
    
    cout << "A idade em dias é: " << calcIdade(anos, meses, dias);
    
}

int cLista::calcIdade(int anos, int meses, int dias){
    
    int idade = 0;
    idade = (anos * 365) + (meses * 30) + dias;
    
    return idade;
    
}