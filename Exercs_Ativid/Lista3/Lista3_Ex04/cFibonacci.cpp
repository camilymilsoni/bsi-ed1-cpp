#include "cFibonacci.h"
#include <iostream>

using namespace std;

cFibonacci::cFibonacci() {
}

cFibonacci::cFibonacci(const cFibonacci& orig) {
}

cFibonacci::~cFibonacci() {
}

void cFibonacci::gerarFib(){
    
    int num1 = 1, num2 = 1;
    
    cout << "A série de Fibonacci até o vigésimo termo é: " << num1 << " - " << num2 << " - ";
    
    for(int i = 0; i < 18; i++){
        num2 = num2 + num1;
        num1 = num2 - num1;
        cout << num2 << " - ";
    }
}