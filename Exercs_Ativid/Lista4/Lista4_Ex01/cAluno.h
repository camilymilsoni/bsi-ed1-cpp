#ifndef CALUNO_H
#define CALUNO_H
#include <iostream>
#include <string>

using namespace std;

struct aluno{
    string nome;
    int matricula;
    float n1, n2;
};

class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void lerDados();
    void imprimirDados(aluno Alunos[], int);
    
    
private:

};

#endif /* CALUNO_H */

