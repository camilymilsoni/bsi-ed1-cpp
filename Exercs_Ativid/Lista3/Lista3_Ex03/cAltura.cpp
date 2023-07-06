#include "cAltura.h"
#include <iostream>

using namespace std;

cAltura::cAltura() {
}

cAltura::cAltura(const cAltura& orig) {
}

cAltura::~cAltura() {
}

void cAltura::lerAlturas(){
    
    float alt, maior, menor;
    int i;
    
    cout << "Informe a altura: ";
    cin >> alt;
    maior = alt;
    menor = alt;
    cout << "Altura maior: " << maior << endl;
    cout << "Altura menor: " << menor << endl;
    cout << endl;
    
    for(i = 0; i < 4; i++){
        cout << "Informe a altura: ";
        cin >> alt;
        maior = this->calcMaior(maior, alt);
        cout << "Altura maior: " << maior << endl;
        menor = this->calcMenor(menor, alt);
        cout << "Altura menor: " << menor << endl;
        cout << endl;
    }
    
}

float cAltura::calcMaior(float maior, float alt){
   
    if(alt > maior){
        maior = alt;
       }
    
    return maior;
}

float cAltura::calcMenor(float menor, float alt){
    
    if(alt < menor){
        menor = alt;
       }
    
    return menor;
    
}