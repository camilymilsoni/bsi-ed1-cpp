#include "cConta.h"
#include <iostream>
#include <string>

using namespace std;

cConta::cConta() {
}

cConta::cConta(const cConta& orig) {
}

cConta::~cConta() {
}

void cConta::lerDados(){
    
    int opc = 0;
    
    cliente Cliente[3];
    conta Conta[3];
    
    for(int i = 0; i < 3; i++){
        cout << "CONTA " << i+1 << ": " << endl;
        cout << "Nome: ";
        cin >> Cliente[i].nome;
        cout << "CPF: ";
        cin >> Cliente[i].cpf;
        cout << "Depósito inicial para a criação da conta: R$";
        cin >> Conta[i].saldo;
        cout << endl;
    }
  
    while(opc != -1){
        cout << "Digite (1) para Saque ou (2) para Depósito ou (-1) para sair: ";
        cin >> opc;
        cout << endl;
        
        switch(opc){
            case 1:
                this->saque(Cliente, Conta);
            break;
            case 2:
                this->deposito(Cliente, Conta);
            break;
            case -1: 
                break;
            default:
                cout << "Opção inválida." << endl;
                cout << endl;
        }
        
    }
    
}

void cConta::saque(cliente Cliente[], conta Conta[]){
    
    float valorSaq = 0;
    long int cpf = 0;
    int aux = 0;
    
    cout << "Informe o CPF: ";
    cin >> cpf;
    cout << endl;
    
    aux = this->pesquisaSequencial(Cliente, cpf);
    
    if(aux != -1){
        cout << "Informe o valor a ser sacado: R$";
        cin >> valorSaq;
        cout << "Nome: " << Cliente[aux].nome << endl;
        cout << "Saldo atual: R$" << (Conta[aux].saldo = (Conta[aux].saldo - valorSaq)) << endl;
        cout << endl;
    }
    else{
        cout << "CPF inválido." << endl;
        cout << endl;
    }
    
}

void cConta::deposito(cliente Cliente[], conta Conta[]){
    
    float valorDep = 0;
    long int cpf = 0;
    int aux = 0;
    
    cout << "Informe o CPF: ";
    cin >> cpf;
    cout << endl;
    
    aux = this->pesquisaSequencial(Cliente, cpf);
    
    if(aux != -1){
        cout << "Informe o valor a ser depositado: R$";
        cin >> valorDep;
        cout << "Nome: " << Cliente[aux].nome << endl;
        cout << "Saldo atual: R$" << (Conta[aux].saldo = (Conta[aux].saldo + valorDep)) << endl;
        cout << endl;
    }
    else{
        cout << "CPF inválido." << endl;
        cout << endl;
    }
    
}

int cConta::pesquisaSequencial(cliente Cliente[], int cpf){
    
    for(int i = 0; i < 3; i++){
        if(cpf == Cliente[i].cpf)
            return i;
    }
    return -1;
}