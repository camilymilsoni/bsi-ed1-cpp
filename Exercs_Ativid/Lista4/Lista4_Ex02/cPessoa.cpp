#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::lerDados(){
    
    int qtd = 0, cpf = 0;
    
    cout << "Informe a quantidade de pessoas a serem cadastradas: ";
    cin >> qtd;
    cout << endl;
    pessoa Pessoas[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "Informe o nome: ";
        cin >> Pessoas[i].nome;
        cout << "Informe a altura: ";
        cin >> Pessoas[i].altura;
        cout << "Informe o peso: ";
        cin >> Pessoas[i].peso;
        cout << "Informe o CPF: ";
        cin >> Pessoas[i].cpf;
        cout << "Informe o sexo: ";
        cin >> Pessoas[i].sexo;
        cout << endl;
    }
    
    cout << "Informe o CPF da pessoa a ser localizada: ";
    cin >> cpf;
    
    this->imprimirDados(Pessoas, qtd, cpf);
    
}

int cPessoa::localizaCpf(pessoa Pessoas[], int qtd, int cpf){
    
    for(int i = 0; i < qtd; i++){
        if(Pessoas[i].cpf == cpf){
            return i;
        }
    }
    return -1;
}

void cPessoa::imprimirDados(pessoa Pessoas[], int qtd, int cpf){

    int aux = 0;
    aux = this->localizaCpf(Pessoas, qtd, cpf);
    
    if(aux != -1){
        cout << endl;
        cout << "Os dados da pessoa localizada são: " <<endl;
        cout << endl;
        
        cout << "Nome: " << Pessoas[aux].nome << endl;
        cout << "Altura: " << Pessoas[aux].altura << endl;
        cout << "Peso: " << Pessoas[aux].peso << endl;
        cout << "CPF: " << Pessoas[aux].cpf << endl;
        cout << "Sexo: " << Pessoas[aux].sexo << endl;
        cout << "IMC: " << (Pessoas[aux].peso / (Pessoas[aux].altura * Pessoas[aux].altura)) << endl;
        cout << endl; 
    }
    else{
        cout << "CPF inválido." << endl;
    }
    
}