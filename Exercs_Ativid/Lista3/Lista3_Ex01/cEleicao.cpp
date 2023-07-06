#include "cEleicao.h"
#include <iostream>

using namespace std;

cEleicao::cEleicao() {
}

cEleicao::cEleicao(const cEleicao& orig) {
}

cEleicao::~cEleicao() {
}

void cEleicao::lerDados() {

    int opc = 1;
    float q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, qtd = 0;
    
    cout << "-----------------------------------" << endl;
    cout << "         1 - Candidato 1           " << endl;
    cout << "         2 - Candidato 2           " << endl;
    cout << "         3 - Candidato 3           " << endl;
    cout << "         4 - Candidato 4           " << endl;
    cout << "         5 - Voto nulo             " << endl;
    cout << "         6 - Voto em branco        " << endl;
    cout << " 0 para sair e mostrar o resultado " << endl;
    cout << "-----------------------------------" << endl;
    
    while(opc != 0){
        
        cout << "Informe a opção desejada: ";
        cin >> opc;
        
        if(opc == 1){
            q1 = q1 + 1;
            qtd = qtd + 1; 
        }
        else{
            if(opc == 2){
                q2 = q2 + 1;
                qtd = qtd + 1;
            }
            else{
                if(opc == 3){
                    q3 = q3 + 1;
                    qtd = qtd + 1;
                }
                else{
                    if(opc == 4){
                        q4 = q4 + 1;
                        qtd = qtd + 1;
                    }
                    else{
                        if(opc == 5){
                            q5 = q5 + 1;
                            qtd = qtd + 1;
                        }
                        else{
                            if(opc == 6){
                                q6 = q6 + 1;
                                qtd = qtd + 1;
                            }
                            else{
                                if(opc == 0){
                                    cout << endl;
                                }
                                else{
                                    cout << "Opção inválida." << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    
    this->totalDados(qtd, q1, q2, q3, q4, q5, q6);
    
}

void cEleicao::totalDados(float qtd, float q1, float q2, float q3, float q4, float q5, float q6) {
    
    cout << "Total de Votos - Candidato 1: " << q1 << endl;
    cout << "Percentual de Votos - Candidato 1: " << (q1 / qtd) * 100 << "%" << endl;
    cout << endl;
    cout << "Total de Votos - Candidato 2: " << q2 << endl;
    cout << "Percentual de Votos - Candidato 2: " << (q2 / qtd) * 100 << "%" << endl;
    cout << endl;
    cout << "Total de Votos - Candidato 3: " << q3 << endl;
    cout << "Percentual de Votos - Candidato 3: " << (q3 / qtd) * 100 << "%" << endl;
    cout << endl;
    cout << "Total de Votos - Candidato 4: " << q4 << endl;
    cout << "Percentual de Votos - Candidato 4: " << (q4 / qtd) * 100 << "%" << endl;
    cout << endl;
    cout << "Total de Votos Nulos: " << q5 << endl;
    cout << "Percentual de Votos Nulos: " << (q5 / qtd) * 100 << "%" << endl;
    cout << endl;
    cout << "Total de Votos em Branco: " << q6 << endl;
    cout << "Percentual de Votos em Branco: " << (q6 / qtd) * 100 << "%" << endl;
    
}