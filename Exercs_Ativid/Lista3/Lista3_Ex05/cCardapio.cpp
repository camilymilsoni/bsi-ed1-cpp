#include "cCardapio.h"
#include <iostream>

using namespace std;

cCardapio::cCardapio() {
}

cCardapio::cCardapio(const cCardapio& orig) {
}

cCardapio::~cCardapio() {
}

void cCardapio::lerPedido(){
    
    int codigo = 0, qtd = 0;
    char opc = 's';
    float v0 = 0, v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
    
    opc = toupper(opc);
    
    cout << "CÓDIGO ------ PRODUTO ------ PREÇO UNITÁRIO" << endl;
    cout << " 100       Cachorro quente       R$ 1.70   " << endl;
    cout << " 101       Bauru simples         R$ 2.30   " << endl;
    cout << " 102       Bauru com ovo         R$ 2.60   " << endl;
    cout << " 103       Hamburguer            R$ 2.40   " << endl;
    cout << " 104       Cheeseburguer         R$ 2.50   " << endl;
    cout << " 105       Refrigerante          R$ 1.00   " << endl;
    cout << endl;
    
    while(opc != 'n'){
        cout << "Informe o código do produto: ";
        cin >> codigo;
        cout << "Informe a quantidade do produto: ";
        cin >> qtd;
        cout << "Deseja continuar o pedido? [S / N]: ";
        cin >> opc;
        
        if(codigo == 100){
            v0 = 1.7 * qtd;
        }
        else{
            if(codigo == 101){
                v1 = 2.3 * qtd;
            }
            else{
                if(codigo == 102){
                    v2 = 2.6 * qtd;
                }
                else{
                    if(codigo == 103){
                        v3 = 2.4 * qtd;
                    }
                    else{
                        if(codigo == 104){
                            v4 = 2.5 * qtd;
                        }
                        else{
                            if(codigo == 105){
                                v5 = 1 * qtd;
                            }
                            else{
                                cout << "Código inválido." << endl;
                            }
                        }
                    }
                }
            }
        }
        
    }
    
    cout << "O valor a ser pago é: R$ " << this->calcularPedido(v0, v1, v2, v3, v4, v5);
    
}

float cCardapio::calcularPedido(float v0, float v1, float v2, float v3, float v4, float v5){
    
    float valorT = 0;
    
    valorT = v0 + v1 + v2 + v3 + v4 + v5;
    
    return valorT;
    
}