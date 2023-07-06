#include "cListaDuplamenteEncad.h"
#include <iostream>

using namespace std;

cListaDuplamenteEncad::cListaDuplamenteEncad() {
}

cListaDuplamenteEncad::cListaDuplamenteEncad(const cListaDuplamenteEncad& orig) {
}

cListaDuplamenteEncad::~cListaDuplamenteEncad() {
}

bool cListaDuplamenteEncad::vazio(struct nodo *campo){
	
	if (campo == NULL) 
            return true;
	else
            return false;
}

void cListaDuplamenteEncad::inserir(){
    
    int x;
    
    cout << "Digite o elemento a inserir: ";
    cin >> x;
    
    this->aux = (struct nodo *) malloc (sizeof(this->aux));
    this->aux->elem = x;
    
    if(this->inicio == NULL){
        this->aux->ant = NULL;
        this->aux->prox = NULL;
        this->inicio = this->aux;
    }
    else{
        this->aux->prox = NULL;
        this->aux->ant = this->fim;
        this->fim->prox = this->aux;
    }
    
    this->fim=this->aux;
    
    cout << this->aux->elem << " foi inserido." << endl << endl;
    
}

void cListaDuplamenteEncad::listar(){
    
    int opc;
    
    cout << "Listar da esquerda para a direita (1) ou da direita para a esquerda (2)?: ";
    cin >> opc;
    cout << endl;
    
    if(opc == 1){
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
    else if(opc == 2){
        cout << "Os elementos inseridos na lista foram: " << endl;
    
        if(!vazio(this->inicio)){
            for(this->aux = this->fim; !vazio(this->aux->ant); this->aux = this->aux->ant){
                cout << this->aux->elem << " ";
            }
            cout << this->aux->elem << " " << endl << endl;
        }
        else{
            cout << "Lista vazia." << endl << endl;
        }
    }
    else{
        cout << "Opção inválida." << endl << endl;
    }
    
}

void cListaDuplamenteEncad::remover(){
    
    int opc;
    
    cout << "Remover da esquerda para a direita (1) ou da direita para a esquerda (2)?: ";
    cin >> opc;
    
    if(opc == 1){
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        cout << this->aux->elem << " foi apagado." << endl << endl;
        free(this->aux);
    }
    else if(opc == 2){
        this->aux = this->fim;
        this->fim = this->fim->ant;
        cout << this->aux->elem << " foi apagado." << endl << endl;
        free(this->aux);    
    }
    else{
        cout << "Opção inválida." << endl << endl;
    }
    
}

void cListaDuplamenteEncad::menu(){

    int op, sair = 0;
    
    this->inicio = NULL;

    for (;sair==0;){
	cout << "1 -> Inserir" << endl;
        cout << "2 -> Remover" << endl;
        cout << "3 -> Listar" << endl;
        cout << "4 -> Inserir elemento no meio" << endl;
        cout << "5 -> Remover elemento do meio" << endl;
        cout << "6 -> Sair" << endl;
	cout << "Digite uma opção: ";
	cin >> op;
	switch (op){
            case 1: inserir(); 
            break;
            case 2: remover();
            break;
            case 3: listar();
            break;
            case 4: inserirMeio();
            break;
            case 5: removerMeio();
            break;
            case 6: sair = 1; 
            break;
            default: 
		cout << "Opção invalida!" << endl;
            break;
	}
    }
    
}

void cListaDuplamenteEncad::inserirMeio(){
    
    int num;
    
    cout << "Digite o elemento a inserir: ";
    cin >> num;
    
    this->aux = (struct nodo *) malloc (sizeof(this->aux));
    this->aux->elem = num;
    this->aux->prox = this->fim;
    this->aux->ant = this->inicio;
    this->fim->ant = this->aux;
    this->inicio->prox = this->aux;
    
    cout << this->aux->elem << " foi inserido." << endl << endl;
    
}

void cListaDuplamenteEncad::removerMeio(){
    
    this->aux = this->fim->ant;
    this->aux = this->inicio->prox;
    this->fim->ant = this->inicio;
    this->inicio->prox = this->fim;
    cout << this->aux->elem << " foi apagado." << endl << endl;
    free(this->aux);
    
}