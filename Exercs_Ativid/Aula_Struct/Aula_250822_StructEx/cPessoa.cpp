#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::cadPessoa(){
    
    int n=2;
    pessoa Vetpessoas[n];
    
    for(int i = 0; i < n; i++){
        cout << "Digite o nome: ";
        cin >> Vetpessoas[i].nome;
        cout << "Digite o endereço: ";
        cin >> Vetpessoas[i].end;
        cout << "Digite o telefone 1: ";
        cin >> Vetpessoas[i].tel1;
        cout << "Digite o CPF: ";
        cin >> Vetpessoas[i].cpf;
        cout << endl;
    }
    this->bolha(Vetpessoas, n);
    this->impDadosPessoa(Vetpessoas,n);
    
}

void cPessoa::impDadosPessoa(pessoa Vetpessoas[], int n){
    
    cout << "Os dados informados são: " << endl;
    
    for(int i = 0; i < n; i++){
        cout << "Nome: " << Vetpessoas[i].nome << endl;
        cout << "Endereço: " << Vetpessoas[i].end << endl;
        cout << "Telefone 1: " << Vetpessoas[i].tel1 << endl;
        cout << "CPF: " << Vetpessoas[i].cpf << endl;
        cout << endl;
    }
    
}

/*struct pessoa cPessoa::buscarTelefone(){
    
    for(int i = 0; i <= 4; i++){
        if(this->VetPessoas[i].tel1 == 123){
            return this->VetPessoas[i];
        }
    }
    
}*/

void cPessoa::bolha(pessoa Vetpessoas[], int n){
    
    int i, j;
    pessoa temp;
    
    for(i = n-1; i >= 1; i--){
        for(j = 0; j < i; j++){
            if(Vetpessoas[j].cpf > Vetpessoas[j+1].cpf){
                temp = Vetpessoas[j];
                Vetpessoas[j] = Vetpessoas[j+1];
                Vetpessoas[j+1] = temp;
            }
        } 
    }
    
    
}