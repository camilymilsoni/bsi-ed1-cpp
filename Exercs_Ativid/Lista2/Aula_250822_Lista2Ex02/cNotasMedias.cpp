#include "cNotasMedias.h"
#include <iostream>

using namespace std;

cNotasMedias::cNotasMedias() {
}

cNotasMedias::cNotasMedias(const cNotasMedias& orig) {
}

cNotasMedias::~cNotasMedias() {
}

void cNotasMedias::lerNotasLetra(){
    
    float nota1 = 0, nota2 = 0, nota3 = 0;
    char letra;
    
    cout << "Informe a nota 1: ";
    cin >> nota1;
    cout << "Informe a nota 2: ";
    cin >> nota2;
    cout << "Informe a nota 3: ";
    cin >> nota3;
    cout << "Digite (A) para Média Aritmética ou (P) para Média Ponderada: ";
    cin >> letra;
    
    letra = toupper(letra);
    
    cout << "A média é: " << returnMedia(nota1, nota2, nota3, letra);
    
    
}

float cNotasMedias::returnMedia(float nota1, float nota2, float nota3, char letra){
    
    float media = 0;
    
    if(letra == 'A'){
        media = (nota1 + nota2 + nota3) / 3;
        return media;
    }
    else if(letra == 'P'){
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        return media;
    }
    
    
}