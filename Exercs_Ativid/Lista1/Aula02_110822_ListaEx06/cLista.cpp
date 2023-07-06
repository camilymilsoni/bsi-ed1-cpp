#include "cLista.h"
#include <iostream>

using namespace std;

cLista::cLista() {
}

cLista::cLista(const cLista& orig) {
}

cLista::~cLista() {
}

int tempo = 0;

void cLista::lerDuracao(){
    
    cout << "Informe o tempo de duração do evento em segundos: ";
    cin >> tempo;
    
}

void cLista::calcDuracao(){
    
    int horas = 0, minutos = 0, segundos = 0;
    
    horas = (tempo / 3600);
    minutos = ((tempo % 3600) / 60);
    segundos = ((tempo % 3600) % 60); 
    
    cout << "A duração do evento é: " << horas << " hora(s), " << minutos << " minutos e " << segundos << " segundos.";
    
}