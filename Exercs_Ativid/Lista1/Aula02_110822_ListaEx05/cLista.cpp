#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerNotas(){
    
    float n1 = 0, n2 = 0, n3 = 0;
    
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;
    
    cout << "A média é: " << media(n1, n2, n3);
    
}

float cLista::media(float n1, float n2, float n3){
    
    float med = 0;
    
    med = (((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5));
    
    return med;
}