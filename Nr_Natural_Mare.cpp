//
// Created by denys on 15.04.2020.
//

#include "Nr_Natural_Mare.h"

Nr_Natural_Mare::~Nr_Natural_Mare() {
    nr_cif=0;

}

Nr_Natural_Mare::Nr_Natural_Mare(const Nr_Natural_Mare &x):nr_cif(x.nr_cif) {
    this->v=x.v;
}
istream &operator>>(istream &in, Nr_Natural_Mare &x)  {
    cout<<"Dati nr de cifre "; in>>x.nr_cif;
    in>>x.v;
    return in;

}

ostream &operator<<(ostream &out, const Nr_Natural_Mare &x) {
    out<<"Nr de cifre este "<<x.nr_cif<<'\n';
    out<<"Vectorul este "<<x.v;
    return out;
}

Nr_Natural_Mare &Nr_Natural_Mare::operator=(const Nr_Natural_Mare &x) {
    if(this==&x)return *this;
    this->nr_cif=x.nr_cif;
    this->v=x.v;
    return *this;
}
