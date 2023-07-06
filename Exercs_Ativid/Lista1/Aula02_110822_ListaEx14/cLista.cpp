#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

void cLista::lerNotas(){
    
    int codigo = 0;
    float n1 = 0, n2 = 0, n3 = 0;
    
    cout << "Informe o código do aluno: ";
    cin >> codigo;
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;
    cout << endl;
    
    if(media(n1, n2, n3) >= 5){
        cout << "Código: " << codigo << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Média: " << media(n1, n2, n3) << endl;
        cout << "Aprovado" << endl;
    }
    else{
        cout << "Código: " << codigo << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Média: " << media(n1, n2, n3) << endl;
        cout << "Reprovado" << endl; 
    }
    
    
    
}

float cLista::media(float n1, float n2, float n3){
    
    float med = 0;
    
    if((n1 > n2) && (n1 > n3)){
        med = ((n1 * 4) + (n2 * 3) + (n3 * 3)) / 10;
    }
    else if((n2 > n1) && (n2 > n3)){
        med = ((n2 * 4) + (n1 * 3) + (n3 * 3)) / 10;
    }
    else if((n3 > n1) && (n3 > n2)){
        med = ((n3 * 4) + (n1 * 3) + (n2 * 3)) / 10;
    }
   
    return med;
            
}