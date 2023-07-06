#include "cPrimo.h"
#include <iostream>
#include <string>

using namespace std;

cPrimo::cPrimo() {
}

cPrimo::cPrimo(const cPrimo& orig) {
}

cPrimo::~cPrimo() {
}

void cPrimo::lerNum(){
    
    int num = 0;
    char opc = 's';
    
    opc = toupper(opc);
    
    while(opc != 'n'){
        cout << "Informe um número: ";
        cin >> num;
        cout << this->verificNum(num) << endl;
        cout << "Deseja continuar? [S / N]: ";
        cin >> opc;
    }
    
}

string cPrimo::verificNum(int num){
    
    int r;
    
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            r = r + 1;
        }
    }
    
    if(r == 0){
        return "O número digitado é primo.";
    }
    else{
        return "O número digitado não é primo.";
    }
    
}