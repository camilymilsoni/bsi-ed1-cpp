#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

int idade = 0;

void cLista::lerIdade(){
    
    cout << "Informe a idade: ";
    cin >> idade;
    
}

void cLista::categ(){
    
    if((idade >= 5) && (idade <= 7)){
        cout << "O nadador está na categoria Infantil A." << endl;
    }
    else if((idade >= 8) && (idade <=10)){
        cout << "O nadador está na categoria Infantil B." << endl;
    }
    else if((idade >= 11) && (idade <= 13)){
        cout << "O nadador está na categoria Juvenil A." << endl;
    }
    else if((idade >= 14) && (idade <= 17)){
        cout << "O nadador está na categoria Juvenil B." << endl;
    }
    else if(idade >= 18){
        cout << "O nadador está na categoria Adulto." << endl;
    }
    else{
        cout << "Categoria inválida.";
    }
}