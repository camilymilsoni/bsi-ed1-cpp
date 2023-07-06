#include "cProduto.h"
#include <iostream>
#include <string>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::lerDados(){
    
    int qtd = 0, cod = 0;
    
    cout << "Informe a quantidade de produtos a serem cadastrados: ";
    cin >> qtd;
    cout << endl;
    
    produto Produto[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "Informe o código do produto: ";
        cin >> Produto[i].codigo;
        cout << "Informe o nome do produto: ";
        cin >> Produto[i].nome;
        cout << "Informe o preço do produto: R$";
        cin >> Produto[i].preco;
        cout << endl;
    }

    this->imprimirLista(Produto, qtd);

    cout << endl;
    cout << "Informe o código do produto: ";
    cin >> cod;
    
    if(this->consultaProduto(Produto, qtd, cod) != -1){
        cout << "Preço: R$ " << this->consultaProduto(Produto, qtd, cod) << endl;
    }
    else{
        cout << "Código inválido." << endl;
    }
    
}

void cProduto::imprimirLista(produto Produto[], int qtd){
    
    for(int i = 0; i < qtd; i++){
        cout << Produto[i].codigo << " - " << Produto[i].nome << " - R$" << Produto[i].preco << endl;
    }
    
}

float cProduto::consultaProduto(produto Produto[], int qtd, int cod){
    
    for(int i = 0; i < qtd; i++){
        if(Produto[i].codigo == cod){
            return Produto[i].preco;
        }
    }
    return -1;
}