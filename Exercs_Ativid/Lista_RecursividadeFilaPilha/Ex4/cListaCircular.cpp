#include "cListaCircular.h"
#include <iostream>

using namespace std;

cListaCircular::cListaCircular() {
}

cListaCircular::cListaCircular(const cListaCircular& orig) {
}

cListaCircular::~cListaCircular() {
}

bool cListaCircular::vazio(struct nodo *campo){
	
	if (campo == NULL) 
            return true;
	else
            return false;
}

void cListaCircular::inserir(){
    
    int x;
    
    cout << "Digite o elemento a inserir: ";
    cin >> x;
    
    this->aux = (struct nodo *) malloc (sizeof(this->aux));
    this->aux->elem = x;
    
    if(this->inicio == 0){  
        this->aux->ant = NULL;
        this->aux->prox = NULL;
        this->inicio = this->aux;
    }
    else{
        this->aux->prox = this->inicio;
        this->aux->ant = this->fim;
        this->fim->prox = this->aux;
    }
    
    this->fim=this->aux;
    
    cout << this->aux->elem << " foi inserido." << endl << endl;
    
}

void cListaCircular::listar(){
    
    //Looping infinito
    
    cout << "Os elementos inseridos na lista foram: " << endl;
    
    if(!vazio(this->inicio)){
        for(this->aux = this->inicio; !vazio(this->aux->prox); this->aux = this->aux->prox){
            cout << this->aux->elem << " ";
        }
        cout << this->aux->elem << " " << endl << endl;
    }
    else{
        cout << "Lista vazia." << endl << endl;
    }
    
}

void cListaCircular::remover(){
    
    this->aux = this->inicio;
    this->inicio = this->inicio->prox;
    cout << this->aux->elem << " foi apagado." << endl << endl;
    free(this->aux);
    
}

void cListaCircular::menu(){
    
    int op, sair = 0;
    
    this->inicio = NULL;

    for (;sair==0;){
	cout << "1 -> Inserir" << endl;
        cout << "2 -> Listar (Looping infinito)" << endl;
        cout << "3 -> Remover" << endl;
        cout << "4 -> Sair" << endl;
	cout << "Digite uma opção: ";
	cin >> op;
	switch (op){
            case 1: inserir(); 
            break;
            case 2: listar();
            break;
            case 3: remover();
            break;
            case 4: sair = 1; 
            break;
            default: 
		cout << "Opção invalida!" << endl;
            break;
	}
    }
    
}