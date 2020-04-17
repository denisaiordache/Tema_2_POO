//
// Created by denys on 15.04.2020.
//

#ifndef TEMA_2_POO_VECTOR_H
#define TEMA_2_POO_VECTOR_H
#include <vector>
#include<iostream>
using namespace std;


class Vector {
protected:
    vector<int>a;
public:
    Vector(){};
    Vector(vector<int> vec);
    Vector(const Vector& v);
    ~Vector();
    friend istream& operator>>(istream&,Vector&);
    friend ostream& operator<<(ostream&,const Vector&);
    Vector& operator=(const Vector& v);
    int getElement(int poz) const {return a[poz];}
    void push(int x){a.push_back(x);}

};


#endif //TEMA_2_POO_VECTOR_H
