#include "cCpfPessoa.h"
#include <iostream>

using namespace std;

cCpfPessoa::cCpfPessoa() {
}

cCpfPessoa::cCpfPessoa(const cCpfPessoa& orig) {
}

cCpfPessoa::~cCpfPessoa() {
}

void cCpfPessoa::lerDados(){
    
    int qtd = 0, cpf = 0;
    
    cout << "Informe a quantidade de pessoas a serem cadastradas: ";
    cin >> qtd;
    cout << endl;
    
    pessoa Pessoa[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "Informe o nome: ";
        cin >> Pessoa[i].nome;
        cout << "Informe o CPF: ";
        cin >> Pessoa[i].cpf;
        cout << endl;
    }
    
    cout << "Informe o CPF da pessoa a ser pesquisada: ";
    cin >> cpf;
    cout << endl;
    
    this->pesquisaPessoa(Pessoa, qtd, cpf);
}

void cCpfPessoa::pesquisaPessoa(pessoa Pessoa[], int qtd, int cpf){
    
    int aux = 0;
    
    //Pesquisa Sequencial
    /*if(this->pesquisaSequencial(Pessoa, qtd, cpf) != -1){
        aux = this->pesquisaSequencial(Pessoa, qtd, cpf);
        cout << Pessoa[aux].nome << " possui o CPF " << Pessoa[aux].cpf << "." << endl;
    }
    else{
        cout << "CPF inválido." << endl;
    }*/
    
    //Pesquisa Binária
    this->bolha(Pessoa, qtd, cpf);
    
    if(this->pesquisaBinaria(Pessoa, qtd, cpf) == -1){
        cout << "CPF inválido." << endl;
    }
    else{
        aux = this->pesquisaBinaria(Pessoa, qtd, cpf);
        cout << Pessoa[aux].nome << " possui o CPF " << Pessoa[aux].cpf << "." << endl;
    }
    
    
}

int cCpfPessoa::pesquisaSequencial(pessoa Pessoa[], int qtd, int cpf){
    
    for(int i = 0; i < qtd; i++){
        if(Pessoa[i].cpf == cpf){
            return i;
        }
    }
    return -1;
}

int cCpfPessoa::pesquisaBinaria(pessoa Pessoa[], int qtd, int cpf){
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    
    while (inf <= sup){
        meio = (inf + sup)/2;
        
        if (cpf == Pessoa[meio].cpf){
            return meio;
        }
        else{
            if (cpf < Pessoa[meio].cpf){
                sup = meio - 1;
            }
            else{
                inf = meio + 1;
            }
        }
    }
    return -1;
    
}

void cCpfPessoa::bolha(pessoa Pessoa[], int qtd, int cpf){
    
    int i, j;
    pessoa temp;
    bool troca;
    troca = true;
    
    for (i = qtd - 1; (i >= 1) && (troca == true); i--){
        troca = false;
        for (j = 0; j < i; j++){
            if (Pessoa[j].cpf > Pessoa[j+1].cpf){
                temp = Pessoa[j];
                Pessoa[j] = Pessoa[j+1];
                Pessoa[j+1] = temp;
                troca = true;
            }
        }
    }
}