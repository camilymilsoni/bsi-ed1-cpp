#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

int idDias = 0;

void cLista::lerIdade(){
    
    cout << "Informe a idade em dias: ";
    cin >> idDias;
    
}

void cLista::calcIdade(){
    
    int anos = 0, meses = 0, dias = 0;
    
    anos = (idDias / 365);
    meses = ((idDias % 365) / 30);
    dias = ((idDias % 365) % 30);
    
    cout << "A idade é: " << anos << " anos, " << meses << " meses e " << dias << " dias.";
    
}