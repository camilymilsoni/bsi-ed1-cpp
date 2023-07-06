#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

int a = 0, b = 0;

void cLista::lerNum(){
    
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    
}

void cLista::numMult(){
    
    if(a % b == 0){
        cout << "São múltiplos." << endl;
    }
    else{
        cout << "Não são múltiplos." << endl;
    }
    
}