#include <iostream>
#include "cLista.h"
#include <math.h>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerDados(){
    
    int a = 0, b = 0, c = 0;
    
    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;
    
    cout << "O valor de D é: " << calcularD(a, b, c);
    
}

float cLista::calcularD(int a, int b, int c){
    
    int r = 0, s = 0;
    float d = 0;
    
    r = pow((a + b), 2);
    s = pow((b + c), 2);
    d = (r + s) / 2;
    
    return d;
    
}
