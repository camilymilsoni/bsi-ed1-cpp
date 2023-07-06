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
    
    int opc;
    float n1, n2, n3;
    
    cout << "Digite (1) para média aritmética ou (2) para média ponderada: ";
    cin >> opc;
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;
    
    cout << "A média é: " << media(opc, n1, n2, n3);
    
}

float cLista::media(int opc, float n1, float n2, float n3){
    
    float med = 0;
    
    switch(opc){
        case 1:
            med = (n1 + n2 + n3) / 3;
        break;
        case 2: 
            med = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
        break;
        default:
            cout << "Opção inválida." << endl;
            
    }
    
    return med;
}