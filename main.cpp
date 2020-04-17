#include <iostream>
#include "Vector.h"
#include "Nr_Natural_Mare.h"
#include "Numar_Fibonacci_mare.h"
using namespace std;

void citire_afisare(unsigned int n) {
    Numar_Fibonacci_mare x[100];
    for(size_t i=0;i<n;i++)
        cin>>x[i];
    for(size_t i=0;i<n;i++)
        cout<<x[i];


}

int main() {
   Numar_Fibonacci_mare ob1;
   try{
       cin>>ob1;
   }
   catch(char const* err){cout<<err;}


   try {
       ob1.descompunere();
   }
   catch(char const* err){cout<<err;}
   catch(...){cout<<"Uncaught exception";}


   return 0;
}
