#include "cValor.h"
#include <iostream>

using namespace std;

cValor::cValor() {
}

cValor::cValor(const cValor& orig) {
}

cValor::~cValor() {
}

void cValor::lerNum(){
    
    int num = 0;
    
    cout << "Informe um número inteiro: ";
    cin >> num;
    cout << "1: Valor positivo || -1: Valor negativo || 0: Valor 0" << endl;
    
    cout << "Número: " << analiseNum(num);
    
    
}

int cValor::analiseNum(int num){
    
    if(num > 0){
        return 1;
    }
    else if(num < 0){
        return -1;
    }
    else if(num == 0){
        return 0;
    }
    
    
}