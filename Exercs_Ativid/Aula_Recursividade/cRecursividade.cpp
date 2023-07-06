#include "cRecursividade.h"
#include <iostream>

using namespace std;

cRecursividade::cRecursividade() {
}

cRecursividade::cRecursividade(const cRecursividade& orig) {
}

cRecursividade::~cRecursividade() {
}

void cRecursividade::lerDados(){
    
    int num;
    
    cout << "Informe um número: ";
    cin >> num;
    
    cout << num << "! = " << this->fatorial(num) << endl;
    
}

int cRecursividade::fatorial(int a){
    
    if(a > 1){   
        return (a * fatorial(a - 1));
    }
    else{
        return (1);
    }
    
}