#include "cPilha.h"
#include <iostream>

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

void cPilha::inserir(){
    
    int x;
    char opc;
    
    do{
        cout << "Informe um número a ser inserido na pilha: ";
        cin >> x;
        
        this->aux=(struct nodo *) malloc(sizeof(aux));
	this->aux->elem=x;
	this->aux->ant=this->topo;
	this->topo=this->aux;
        
	cout<<"Elemento inserido!\n\n";
        
        cout << "Deseja continuar? (S/N): ";
        cin >> opc;
        
    }while((opc == 'S') || (opc == 's'));
    
    cout << endl << "Os números inseridos foram: " <<endl;
    this->imprimirPilhaRecursividade(this->topo);
    
}

void cPilha::imprimirPilhaRecursividade (struct nodo *topo){
    
    if(topo != NULL){
        cout << topo->elem << "\n";
        this->imprimirPilhaRecursividade(topo->ant);
    }
    
}