#include "cFila.h"
#include <iostream>

using namespace std;

cFila::cFila() {
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

bool cFila::vazio(struct nodo *campo){
	
	if (campo == NULL) 
            return true;
	else
            return false;
}

void cFila::inserir(){
    
    int x;
    
    cout << "Digite o elemento a inserir: ";
    cin >> x;
    
    this->aux= (struct nodo *) malloc (sizeof(this->aux));
    this->aux->elem = x;
    this->aux->prox = NULL;

    if (this->inicio == 0){
        this->inicio = this->aux;
    }
    else{
        this->fim->prox = this->aux;
    }
    this->fim = this->aux;

    cout << this->aux->elem << " inserido com sucesso!" << endl << endl;
}

void cFila::listar(){
    
    if(!vazio(this->inicio)){
        for(this->aux = this->inicio; !vazio(this->aux->prox); this->aux = this->aux->prox){
            cout << this->aux->elem << endl;
        }
        cout << this->aux->elem << endl << endl;
    }
    else{
        cout << "Fila vazia." << endl << endl;
    }
    
}

void cFila::remover(){
    
    this->aux = this->inicio;
    this->inicio = this->inicio->prox;
    cout << this->aux->elem << " foi apagado." << endl << endl;
    free(this->aux);
    
}

void cFila::menu(){
    
    char op;
    int sair = 0;
    
    this->inicio = NULL;

    for (;sair==0;){
	cout << "1 -> Insere na fila" << endl;
        cout << "2 -> Remove da fila" << endl;
	cout << "3 -> Listar fila" << endl;
        cout << "4 -> Sair da fila" << endl;
	cout << "Digite uma opção: ";
	cin >> op;
	switch (op){
            case '1': inserir(); 
            break;
            case '2': remover(); 
            break;
            case '3': listar(); 
            break;
            case '4': sair = 1; 
            break;
            default: {
		cout << "Opção invalida!" << endl;
                break;
            }
	}
    }
    
}