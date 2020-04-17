//
// Created by denys on 15.04.2020.
//

#ifndef TEMA_2_POO_NR_NATURAL_MARE_H
#define TEMA_2_POO_NR_NATURAL_MARE_H
#include "Vector.h"
#include <iostream>
using namespace std;


class Nr_Natural_Mare {
protected:
    Vector v;
    int nr_cif;
public:
    Nr_Natural_Mare(){nr_cif=0;};
    explicit Nr_Natural_Mare(const Vector &v,int nr_cif=0):nr_cif(nr_cif),v(v){};
    Nr_Natural_Mare(const Nr_Natural_Mare& x);
    virtual ~Nr_Natural_Mare()=0;
    friend istream& operator>>(istream&,Nr_Natural_Mare&);
    friend ostream& operator<<(ostream&,const Nr_Natural_Mare&);
    Nr_Natural_Mare& operator=(const Nr_Natural_Mare& x);
};


#endif //TEMA_2_POO_NR_NATURAL_MARE_H
