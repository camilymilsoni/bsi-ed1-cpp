#include "cFilaEstatica.h"
#include <iostream>

using namespace std;

cFilaEstatica::cFilaEstatica() {
}

cFilaEstatica::cFilaEstatica(const cFilaEstatica& orig) {
}

cFilaEstatica::~cFilaEstatica() {
}

void cFilaEstatica::lerDados(){
    
    //Alocação Estática
    int qtd_elementos;
    cout << "Digite a quantidade de elementos: ";
    cin >> qtd_elementos;
    int fila[qtd_elementos];
    this->menu(qtd_elementos, fila);

}

void cFilaEstatica::menu(int qtd_elementos, int fila[]){

    int opcao=0, inicio=0;
    while(true){
    
        cout << endl;
        cout << "1 -> Inserir (PUSH)" << endl;
        cout << "2 -> Remover (POP)" << endl;
        cout << "3 -> Imprimir" << endl;
        cout << "Digite a opção: ";
        cin >> opcao;
        
        switch(opcao){
            case 1: inicio = this->push(inicio, qtd_elementos, fila);
            break;
            case 2: inicio = this->pop(inicio, fila);
            break;
            case 3: this->imprimir(inicio, fila);
            break;
            default: 
                cout << "Opção inválida." << endl;
                break;              
    
         }
    }
}

int cFilaEstatica::push(int inicio, int qtd_elementos, int fila[]){
    
    int valor = 0;
    
    if(inicio == qtd_elementos)
        cout << "É necessário remover um elemento." << endl;
    else{
        cout << "Digite um elemento a ser inserido na fila: ";
        cin >> valor;
        fila[inicio] = valor;
        inicio++;
        cout << valor << " inserido com sucesso." << endl;
    }  
    return inicio;

}

int cFilaEstatica::pop(int inicio, int fila[]){

    for(int i = 0; i < inicio; i++){
       fila[i] = fila[i+1];
    }
    return inicio;
    
}


void cFilaEstatica::imprimir(int inicio, int fila[]){

    cout << "Os elementos inseridos na fila foram: " << endl;
    
    for(int i = 0; i < inicio; i++){
        cout << fila[i] << " ";
    }
    cout << endl;
}