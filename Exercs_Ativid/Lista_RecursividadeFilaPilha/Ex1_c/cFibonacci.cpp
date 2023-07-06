#include "cFibonacci.h"
#include <iostream>

using namespace std;

cFibonacci::cFibonacci() {
}

cFibonacci::cFibonacci(const cFibonacci& orig) {
}

cFibonacci::~cFibonacci() {
}

void cFibonacci::lerDados(){
    
    int n = 0;
    
    cout << "Informe o número de termos da sequência de Fibonacci: ";
    cin >> n;
    
    cout << "Resultado: ";
    
    for(int i = 0; i <= n; i++){
        cout << fibonacciRecursivo(i + 1) << " ";
    }
    
}

int cFibonacci::fibonacciRecursivo(int n){
    
    if(n <= 1){
        return n;
    }
    else{
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}