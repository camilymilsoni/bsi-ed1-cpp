#include "cPilhaEstatica.h"
#include <iostream>

using namespace std;

cPilhaEstatica::cPilhaEstatica() {
}

cPilhaEstatica::cPilhaEstatica(const cPilhaEstatica& orig) {
}

cPilhaEstatica::~cPilhaEstatica() {
}

void cPilhaEstatica::lerDados(){
    
    //Alocação Estática
    int qtd_elementos;
    cout << "Digite a quantidade de elementos: ";
    cin >> qtd_elementos;
    int pilha[qtd_elementos];
    this->menu(qtd_elementos, pilha);

}

void cPilhaEstatica::menu(int qtd_elementos, int pilha[]){

    int opcao=0, topo=0;
    while(true){
    
        cout << endl;
        cout << "1 -> Inserir (PUSH)" << endl;
        cout << "2 -> Remover (POP)" << endl;
        cout << "3 -> Imprimir" << endl;
        cout << "Digite a opção: ";
        cin >> opcao;
        
        switch(opcao){
            case 1: topo = this->push(topo, qtd_elementos, pilha);
            break;
            case 2: topo = this->pop(topo);
            break;
            case 3: this->imprimir(topo, pilha);
            break;
            default: 
                cout << "Opção inválida." << endl;
                break;              
    
         }
    }
}

int cPilhaEstatica::push(int topo, int qtd_elementos, int pilha[]){
    
    int valor = 0;
    
    if(topo == qtd_elementos)
        cout << "É necessário remover um elemento" << endl;
    else{
        cout << "Digite um elemento a ser inserido na pilha: ";
        cin >> valor;
        pilha[topo] = valor;
        topo++;
        cout << valor << " inserido com sucesso." << endl;
    }  
    return topo;

}

int cPilhaEstatica::pop(int topo){
    
    if(topo < 0){
        cout << "A pilha está vazia" << endl;
    }
    else{
        topo--;
    }    
 
    return topo;
}


void cPilhaEstatica::imprimir(int topo, int pilha[]){

    for(int i = 0; i < topo; i++)
        cout << pilha[i] << endl;

}