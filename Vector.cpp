//
// Created by denys on 15.04.2020.
//

#include "Vector.h"

Vector::Vector(vector<int> vec) {
    for (auto &it:vec)
        a.push_back(it);
}

Vector::Vector(const Vector& v) {
    for(auto &it:v.a)
        a.push_back(it);
}

Vector::~Vector() {

    a.clear();

}

istream &operator>>(istream &in, Vector &v) {
    v.a.clear();
    size_t n;
    cout<<"Dati nr de elemente ale vectorului "<<" "; in>>n;
    for(int i=0;i<n;i++)
    {   int x;
        in>>x;
        if(x>9 or x<0)throw "eroare de input";
        v.a.push_back(x);}
    return in;

}

ostream &operator<<(ostream &out, const Vector &v) {
    for(auto &it:v.a)
        if(it>9 or it<0)throw "Eroare de input";

    for(auto &it:v.a)
        out<<it<<"";
    return out;
}

Vector &Vector::operator=(const Vector &v) {
    if(this==&v)
    {return *this;}
    a.clear();
    for(auto &it:v.a)
        a.push_back(it);
    return *this;
}
