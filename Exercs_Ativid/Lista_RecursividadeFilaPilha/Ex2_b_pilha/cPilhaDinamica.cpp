#include "cPilhaDinamica.h"
#include <iostream>

using namespace std;

cPilhaDinamica::cPilhaDinamica() {
}

cPilhaDinamica::cPilhaDinamica(const cPilhaDinamica& orig) {
}

cPilhaDinamica::~cPilhaDinamica() {
}

bool cPilhaDinamica::vazio(struct nodo *campo){
	
    if (campo == NULL) 
        return true;
    else
        return false;
}

void cPilhaDinamica::insere(){
	
    int x;

    cout<<"\nEntre com o numero a inserir: ";
    cin>>x;
	
    this->aux=(struct nodo *) malloc(sizeof(aux));
    this->aux->elem=x;
    this->aux->ant=this->topo;
    this->topo=this->aux;
        
    cout<<"Elemento inserido!\n\n";
        
}

void cPilhaDinamica::removr(){
	
    if (!vazio(this->topo)){
	   this->aux=this->topo;
	   this->topo=this->topo->ant;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!" << endl;
    }
    else{
        cout << "Pilha vazia." << endl << endl;
    }
}

void cPilhaDinamica::listar(){

    cout << "Os elementos inseridos na pilha foram: " << endl;
    
        nodo *p;
	p = this->topo;
        while (!vazio(p->ant)){
           cout << p->elem << endl;
           p = p->ant;
        }
        cout << p->elem << endl << endl;

}

void cPilhaDinamica::menu(){
	
    int op;
	int sair=0;

	this->topo=NULL;
        
	for (;sair==0;){
		cout << "1 -> Inserir\n";
                cout << "2 -> Remover\n";
		cout << "3 -> Listar\n";
                cout << "4 -> Verificar qual elemento está no meio\n";
                cout << "5 -> Sair\n";
		cout << "Digite uma opção: ";
		cin>>op;
		switch (op){
                    case 1: this->insere(); 
                    break;
                    case 2: this->removr(); 
                    break;
                    case 3: this->listar(); 
                    break;
                    case 4: this->verificarMeio();
                    break;
                    case 5: sair = 1; 
                    break;
                    default:  {
                        cout << "Opção inválida! \n";
                        break;
                    }
		}
	}

}

void cPilhaDinamica::verificarMeio(){
    
    
    
}