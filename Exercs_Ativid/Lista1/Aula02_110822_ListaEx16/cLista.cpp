#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerDados(){
    
    int codigo = 0, qtd = 0;
    
    cout << "ESPECIFICAÇÃO      CÓDIGO      PREÇO" << endl;
    cout << "Cachorro quente     100         1,20" << endl;
    cout << "Bauru simples       101         1,30" << endl;
    cout << "Bauru com ovo       102         1,50" << endl;
    cout << "Hambúrguer          103         1,20" << endl;
    cout << "Cheeseburguer       104         1,30" << endl;
    cout << "Refrigerante        105         1,00" << endl;
    cout << endl;
    
    cout << "Informe o código do produto: ";
    cin >> codigo;
    cout << "Informe a quantidade desse produto: ";
    cin >> qtd;
    
    cout << "O valor a ser pago é: R$" << valorT(codigo, qtd);
    
}

float cLista::valorT(int codigo, int qtd){
    
    float val = 0;
    
    if(codigo == 100){
        val = 1.2 * qtd;
    }
    else if(codigo == 101){
        val = 1.3 * qtd;
    }
    else if(codigo == 102){
        val = 1.5 * qtd;
    }
    else if(codigo == 103){
        val = 1.2 * qtd;
    }
    else if(codigo == 104){
        val = 1.3 * qtd;
    }
    else if(codigo == 105){
        val = 1 * qtd;
    }
    
    return val;
}