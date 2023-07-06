#ifndef CFIBONACCI_H
#define CFIBONACCI_H

class cFibonacci {
public:
    cFibonacci();
    cFibonacci(const cFibonacci& orig);
    virtual ~cFibonacci();
    
    void lerDados();
    int fibonacciRecursivo(int);
    
private:

};

#endif /* CFIBONACCI_H */

