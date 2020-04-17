//
// Created by denys on 15.04.2020.
//

#ifndef TEMA_2_POO_NUMAR_FIBONACCI_MARE_H
#define TEMA_2_POO_NUMAR_FIBONACCI_MARE_H
#include "Nr_Natural_Mare.h"
#include <iostream>
using namespace std;


class Numar_Fibonacci_mare:public Nr_Natural_Mare {
public:
    Numar_Fibonacci_mare():Nr_Natural_Mare(){};
    explicit Numar_Fibonacci_mare(const Vector &v,int nr_cif=0):Nr_Natural_Mare(v,nr_cif){}; //pentru a evita conversiile implicite facute de compilator
    Numar_Fibonacci_mare(const Numar_Fibonacci_mare& x);
    friend istream& operator>>(istream&,Numar_Fibonacci_mare&);
    friend ostream& operator<<(ostream&,const Numar_Fibonacci_mare&);
    Numar_Fibonacci_mare& operator=(const Numar_Fibonacci_mare& x);
    ~Numar_Fibonacci_mare() noexcept override=default;
    Numar_Fibonacci_mare operator+(const Numar_Fibonacci_mare& x);
    bool equal(const Numar_Fibonacci_mare &x2);
    void descompunere();
    virtual void afis();
    bool operator < (const Numar_Fibonacci_mare& x);





};


#endif //TEMA_2_POO_NUMAR_FIBONACCI_MARE_H
