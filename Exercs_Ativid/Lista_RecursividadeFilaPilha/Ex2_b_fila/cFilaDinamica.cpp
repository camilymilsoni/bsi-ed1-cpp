#include "cFilaDinamica.h"
#include <iostream>

using namespace std;

cFilaDinamica::cFilaDinamica() {
}

cFilaDinamica::cFilaDinamica(const cFilaDinamica& orig) {
}

cFilaDinamica::~cFilaDinamica() {
}

bool cFilaDinamica::vazio(struct nodo *campo){
	
	if (campo == NULL) 
            return true;
	else
            return false;
}

void cFilaDinamica::inserir(){
    
    int x;
    
    cout << "Digite o elemento a inserir: ";
    cin >> x;
    
    if(this->verificarElemento(x)){
        cout << "O elemento " << x << " já existe na fila." << endl << endl;
    }
    else{
                
        this->aux= (struct nodo *) malloc (sizeof(this->aux));
        this->aux->elem = x;
        this->aux->prox = NULL;

        if (this->inicio == 0){ // poderia ser if(this->inicio == NULL)
            this->inicio = this->aux;
        }else{
            this->fim->prox = this->aux;
        }
        this->fim = this->aux;
       
        cout << this->aux->elem << " foi inserido." << endl << endl;    
    }
}

void cFilaDinamica::listar(){
    
    cout << "Os elementos inseridos na fila foram: " << endl;
    
    if(!vazio(this->inicio)){
        for(this->aux = this->inicio; !vazio(this->aux->prox); this->aux = this->aux->prox){
            cout << this->aux->elem << " ";
        }
        cout << this->aux->elem << " " << endl << endl;
    }
    else{
        cout << "Fila vazia." << endl << endl;
    }
    
}

void cFilaDinamica::remover(){
    
    this->aux = this->inicio;
    this->inicio = this->inicio->prox;
    cout << this->aux->elem << " foi apagado." << endl << endl;
    free(this->aux);
    
}

void cFilaDinamica::menu(){
    
    char op;
    int sair = 0;
    
    this->inicio = NULL;
    this->fim = NULL;
    this->aux = NULL;

    for (;sair==0;){
	cout << "1 -> Inserir" << endl;
        cout << "2 -> Remover" << endl;
	cout << "3 -> Listar" << endl;
        cout << "4 -> Sair" << endl;
	cout << "Digite uma opção: ";
	cin >> op;
	switch (op){
            case '1': this->inserir(); 
            break;
            case '2': this->remover(); 
            break;
            case '3': this->listar(); 
            break;
            case '4': sair = 1; 
            break;
            default: 
		cout << "Opção inválida!" << endl;
            break;
	}
    }
    
}

bool cFilaDinamica::verificarElemento(int x){
    
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        if(x == this->aux->elem){
            return true;
        }      
    }
    return false;
    
}