#include "cFatorial.h"
#include <iostream>

using namespace std;

cFatorial::cFatorial() {
}

cFatorial::cFatorial(const cFatorial& orig) {
}

cFatorial::~cFatorial() {
}

void cFatorial::lerDados(){
    
    int num;
    
    cout << "Informe um número: ";
    cin >> num;
    
    cout << num << "! = " << this->calculoFatorial(num) << endl;
    
}

int cFatorial::calculoFatorial(int a){
    
    if(a > 1){
        return (a * calculoFatorial(a - 1));
    }
    else{
        return (1);
    }
    
}