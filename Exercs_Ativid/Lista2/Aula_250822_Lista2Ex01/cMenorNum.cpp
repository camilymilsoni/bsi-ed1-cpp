#include "cMenorNum.h"
#include <iostream>

using namespace std;

cMenorNum::cMenorNum() {
}

cMenorNum::cMenorNum(const cMenorNum& orig) {
}

cMenorNum::~cMenorNum() {
}

void cMenorNum::lerNums(){
    
    int n1 = 0, n2 = 0;
    
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    
    cout << "O menor número digitado é: " <<returnNumMen(n1, n2);
    
    
}

int cMenorNum::returnNumMen(int n1, int n2){
    
    if(n1 < n2){
        return n1;
    }
    else{
        return n2;
    }
    
}