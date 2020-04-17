//
// Created by denys on 15.04.2020.
//

#include "Numar_Fibonacci_mare.h"

Numar_Fibonacci_mare::Numar_Fibonacci_mare(const Numar_Fibonacci_mare &x): Nr_Natural_Mare(x) {}

istream &operator>>(istream &in, Numar_Fibonacci_mare &x) {
    cout<<"Dati nr de cifre "; in>>x.nr_cif;
    in>>x.v;
    return in;}

ostream &operator<<(ostream &out, const Numar_Fibonacci_mare &x) {
    out<<x.v;
    return out;
}

Numar_Fibonacci_mare &Numar_Fibonacci_mare::operator=(const Numar_Fibonacci_mare& x) {
    if(this!=&x){this->Nr_Natural_Mare::operator=(x);}
    return *this;
}

Numar_Fibonacci_mare Numar_Fibonacci_mare::operator+(const Numar_Fibonacci_mare &x) {
    Numar_Fibonacci_mare rez;
    vector <int> vec;
    int transp=0, len1=this->nr_cif, len2=x.nr_cif;
    len1--;
    len2--;
    while(len1>=0 && len2>=0)
    {
        vec.push_back((this->v.getElement(len1) + x.v.getElement(len2) + transp)%10);
        transp=(this->v.getElement(len1) + x.v.getElement(len2) + transp)/10;
        len1--;
        len2--;
    }

    while(len1>=0)
    {
        vec.push_back((this->v.getElement(len1) + transp)%10);
        transp=(this->v.getElement(len1) + transp)/10;
        len1--;
    }

    while(len2>=0)
    {
        vec.push_back((x.v.getElement(len2) + transp)%10);
        transp=(x.v.getElement(len2) + transp)/10;
        len2--;
    }

    if(transp)vec.push_back(transp);

    int len_rez=vec.size();
    int i,poz=-1;
    //cout<<len_rez<<"dim_rez"<<endl;
    for(i=len_rez-1; i>=0; i--)
    {
        poz++;
        rez.v.push(vec.at(i));

    }
    rez.nr_cif=poz+1;
    return rez;
}

bool Numar_Fibonacci_mare::equal( const Numar_Fibonacci_mare &x2) {
    if (this->nr_cif!=x2.nr_cif)return false;
    else
    if(this->v.getElement(0)!=x2.v.getElement(0))return false;
    else
    {int len=x2.nr_cif, i;
        for(i=0;i<len;i++)
            if(this->v.getElement(i)!=x2.v.getElement(i))
                return false;
     return true;}
}

void Numar_Fibonacci_mare::descompunere() {
    std::vector <int> x={0};
    Numar_Fibonacci_mare ob2(x,1);
    x={1};
    Numar_Fibonacci_mare ob3(x,1);
    Numar_Fibonacci_mare ob4;
    ob4=ob2+ob3;
    while(ob4<*this)
    {
        ob2=ob3;
        ob3=ob4;
        ob4=ob2+ob3;

    }
    if(ob4.equal(*this))
        cout<<"Descompunerea numarului este:"<<ob2<<"+"<<ob3;
    else
        throw "Nr nu e Fibo";
}

void Numar_Fibonacci_mare::afis() {
    cout<<this->v<<'\n';

}

bool Numar_Fibonacci_mare::operator<(const Numar_Fibonacci_mare &x) {
    if(this->nr_cif<x.nr_cif)
        return true;
    if(this->nr_cif>x.nr_cif)
        return false;
    size_t i;
    if(x.nr_cif==this->nr_cif)
    {
        for(i=0;i<x.nr_cif;i++)
            if(this->v.getElement(i)>x.v.getElement(i))
                return false;
    }
    return true;

}



