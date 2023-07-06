#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

//Variável global criada fora do método - sofre variações durante a execução do sistema

void cLista::lerDados(){
    
    int codigo = 0; //Variável local criada dentro do método - sofre variações durante a execução do sistema
    int qtd;
    char opcao;
    float conta;
    
    cout << "CÓDIGO        PREÇO UNITÁRIO" << endl;
    cout << " 1001               5,32     " << endl;
    cout << " 1324               6,45     " << endl;
    cout << " 6548               2,37     " << endl;
    cout << " 0987               5,32     " << endl;
    cout << " 7623               6,45     " << endl;
    cout << endl;
    
    while(opcao != 's'){
        cout << "Informe o código do produto: ";
        cin >> codigo;
        cout << "Informe a quantidade desse produto: ";
        cin >> qtd;
        cout << "Digite s para sair ou c para continuar: ";
        cin >> opcao;
        
        conta = conta + precoT(codigo, qtd);
    }
    
    cout << "O preço total é: R$" << conta;
    
}

float cLista::precoT(int codigo, int qtd){
    
    float p = 0;
        
    switch(codigo){
        case 1001:
            p = 5.32 * qtd;
        break;
        case 1324:
            p = 6.45 * qtd;
        break;
        case 6548:
           p = 2.37 * qtd;
        break;
        case 987:
            p = 5.32 * qtd;
        break;
        case 7623:
            p = 6.45 * qtd;
        break;
        default:
            cout << "Código inválido." << endl;
    }    
    
    return p;
    
}