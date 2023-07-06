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
    
    int n1 = 0, n2 = 0, n3 = 0;
    
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << "Informe o terceiro número: ";
    cin >> n3;
    
    cout << "O maior número é: " << numMaior(n1, n2, n3);
    
}

int cLista::numMaior(int n1, int n2, int n3){
    
    int maior;
    
    maior = n1;
    
    if((n2 > n1) && (n2 > n3)){
        maior = n2;
    }
    else if((n3 > n1) && (n3 > n2)){
        maior = n3;
    }
    
    return maior;
    
}