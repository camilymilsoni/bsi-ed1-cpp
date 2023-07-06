#include "cTabuada.h"
#include <iostream>

using namespace std;

cTabuada::cTabuada() {
}

cTabuada::cTabuada(const cTabuada& orig) {
}

cTabuada::~cTabuada() {
}

void cTabuada::lerDados(){
    
    int num, i = 0;
    
    cout << "Informe um número: ";
    cin >> num;
    cout << endl;
    
    cout << "A tabuada desse número é: " << endl;
    this->mostrarTabuada(num, i);
    cout << endl;
    
    cout << "O valor acumulado dessa tabuada é: " << this->calculoTabuada(num, 1) << endl;
    
}

int cTabuada::calculoTabuada(int num, int i){
   
    if((num > 0) && (i <= 10)){
        return (num * i) + (calculoTabuada(num, i + 1));
    }
    else{
        return 0;
    }
    
}

void cTabuada::mostrarTabuada(int num, int i){
    
    for(i = 0; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
}