#include <iostream>
// #include "ixj0644_Allele.h"
// #include "ixj0644_Genotype.h"
#include "ixj0644_HW2/ixj0644_Trait.h"

using namespace std;

int main(){

    Allele t1_allele1('R', true);
    Allele t1_allele2('R', true);
    Genotype g1(t1_allele1, t1_allele2);
    Trait trait1("Seed Shape", g1, "wrinkled");
    cout << trait1;


    Trait trait2(); 
    Trait trait3();
    Trait trait4();
    Trait trait5();
    Trait trait6();
    Trait trait7();
    
    return 0;
}