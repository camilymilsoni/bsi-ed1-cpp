#include "cFilaVerificacao.h"
#include <iostream>

using namespace std;

cFilaVerificacao::cFilaVerificacao() {
}

cFilaVerificacao::cFilaVerificacao(const cFilaVerificacao& orig) {
}

cFilaVerificacao::~cFilaVerificacao() {
}

void cFilaVerificacao::inserir(){
    
    int x;
    
    cout << "Digite o elemento a inserir: ";
    cin >> x;
    
    if(pesquisar(x)){
        cout << "Esse valor já existe." << endl << endl;
    }
    else{
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
    
}

bool cFilaVerificacao::pesquisar(int x){
    
    bool chave = false;
    
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        if(x == aux->elem){
            chave = true;
        }
    }
    
    return chave;
    
}

void cFilaVerificacao::menu(){
    
    char op;
    int sair = 0;
    
    this->inicio = NULL;

    for (;sair==0;){
	cout << "1 -> Insere na fila" << endl;
        cout << "2 -> Sair da fila" << endl;
	cout << "Digite uma opção: ";
	cin >> op;
	switch (op){
            case '1': inserir(); 
            break;
            case '2': sair = 1; 
            break;
            default: {
		cout << "Opção invalida!" << endl;
                break;
            }
	}
    }
}