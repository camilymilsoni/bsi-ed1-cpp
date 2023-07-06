#include "cAluno.h"
#include <iostream>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados(){
    
    int qtd = 0;
    
    cout << "Digite a quantidade de alunos a serem cadastrados: ";
    cin >> qtd;
    cout << endl;
    
    aluno Alunos[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "Informe o nome do aluno: ";
        cin >> Alunos[i].nome;
        cout << "Informe a matrícula do aluno: ";
        cin >> Alunos[i].matricula;
        cout << "Informe a nota 1 do aluno: ";
        cin >> Alunos[i].n1;
        cout << "Informe a nota 2 do aluno: ";
        cin >> Alunos[i].n2;  
        cout << endl;
    }
    
    this->imprimirDados(Alunos, qtd);
}

void cAluno::imprimirDados(aluno Alunos[], int qtd){
    
    cout << "Dados dos alunos: " << endl;
    cout << endl;
    
    for(int i = 0; i < qtd; i++){
        cout << "Nome: " << Alunos[i].nome << endl;
        cout << "Matrícula: " << Alunos[i].matricula << endl;
        cout << "Nota 1: " << Alunos[i].n1 << endl;
        cout << "Nota 2: " << Alunos[i].n2 << endl;
        cout << "Média: " << ((Alunos[i].n1 + Alunos[i].n2) / 2) << endl;
        cout << endl;
    }
    
}