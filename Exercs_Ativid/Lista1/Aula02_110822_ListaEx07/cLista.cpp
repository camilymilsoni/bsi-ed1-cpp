#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::custoFab(){
    
    float fabCust = 0;
    
    cout << "Informe o custo de fábrica do veículo: R$";
    cin >> fabCust;
    
    cout << "O custo do veículo ao consumidor é: R$" << custoCons(fabCust) << endl;
}

float cLista::custoCons(float fabCust){
    
    float consCust = 0;
    
    consCust = fabCust + (0.28 * fabCust) + (0.45 * fabCust);
    
    return consCust;
    
}