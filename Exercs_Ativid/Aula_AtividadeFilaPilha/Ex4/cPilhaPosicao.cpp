#include "cPilhaPosicao.h"
#include <iostream>
#include <valarray>

using namespace std;

cPilhaPosicao::cPilhaPosicao() {
}

cPilhaPosicao::cPilhaPosicao(const cPilhaPosicao& orig) {
}

cPilhaPosicao::~cPilhaPosicao() {
}

bool cPilhaPosicao::vazio(struct nodo *campo){
	
	if (campo == NULL) 
            return true;
	else
            return false;
}

void cPilhaPosicao::insere(void)
{
	int x;

        cout<<"\nEntre com o numero a inserir: ";
        cin>>x;
	
	this->aux=(struct nodo *) malloc(sizeof(aux));
	this->aux->elem=x;
	this->aux->ant=this->topo;
	this->topo=this->aux;
        
	cout<<"Elemento inserido!\n\n";
}

void cPilhaPosicao::removr(void){
	if (!vazio(this->topo)){
	   this->aux=this->topo;
	   this->topo=this->topo->ant;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!" << endl;
	}
}

void cPilhaPosicao::listar(void){

    cout << "Os elementos inseridos na pilha foram: " << endl;
    
        nodo *p;
	p = this->topo;
        while (!vazio(p->ant)){
           cout << p->elem << endl;
           p = p->ant;
        }
        cout << p->elem << endl; 

}

int cPilhaPosicao::elementoMeio(){
    
    int contador = 0, valor = 0, meio = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        contador++;
    }
    
    cout << endl;
    cout << contador << endl;
    meio = contador / 2;
    cout << meio << endl;
    contador = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        
        if(meio == contador){
            valor = aux->elem;
        }
        contador++;
    }
    return valor;
    
    
}

void cPilhaPosicao::menu(void){
	int op;
	int sair=0;

	this->topo=NULL;
	for (;sair==0;){
		cout << "1 -> Insere na pilha\n";
                cout << "2 -> Remove da pilha\n";
		cout << "3 -> Listar pilha\n";
                cout << "4 -> Sair da pilha\n";
		cout<<"Digite uma opção: ";
		cin>>op;
		switch (op){
                    case 1: insere(); 
                    break;
                    case 2: removr(); 
                    break;
                    case 3: listar(); 
                        cout << "O elemento que está na posição do meio é: " << elementoMeio() << endl << endl;
                    break;
                    case 4: sair=1; 
                    break;
                    default:  {
                        cout << "Opção invalida! \n";
                        break;
                    }
		}
	}

}