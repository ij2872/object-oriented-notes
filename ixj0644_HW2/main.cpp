#include <iostream>
// #include "ixj0644_Allele.h"
// #include "ixj0644_Genotype.h"
#include "ixj0644_Trait.h"

using namespace std;

int main(){

    Allele t1_allele1('R', true);
    Allele t1_allele2('R', true);
    Genotype g1(t1_allele1, t1_allele2);
    Trait trait1("Seed Shape", g1, "wrinkled");

    Allele t2_allele1('Y', true);
    Allele t2_allele2('Y', true);
    Genotype g2(t2_allele1, t2_allele2);
    Trait trait2("Seed Color", g2, "Yellow"); 

    Allele t3_allele1('I', true);
    Allele t3_allele2('I', true); 
    Genotype g3(t3_allele1, t3_allele2);
    Trait trait3("Pod Shape", g3, "Inflated");

    Allele t4_allele1('G', true);
    Allele t4_allele2('G', true);
    Genotype g4(t4_allele1, t4_allele2);
    Trait trait4("Pod Color", g4, "Green");

    Allele t5_allele1('P', true);
    Allele t5_allele2('P', true);
    Genotype g5(t5_allele1, t5_allele2);
    Trait trait5("Flower Color", g5, "Purple");

    Allele t6_allele1('A', true);
    Allele t6_allele2('A', true);
    Genotype g6(t6_allele1, t6_allele2);
    Trait trait6("Flower Position", g6, "Axial");

    Allele t7_allele1('T', true);
    Allele t7_allele2('T', true);
    Genotype g7(t7_allele1, t7_allele2);
    Trait trait7("Plant Height", g7, "Tall");

    //Output
    cout << endl;
    cout << trait1 << endl;
    cout << trait2 << endl;
    cout << trait3 << endl;
    cout << trait4 << endl;
    cout << trait5 << endl;
    cout << trait6 << endl;
    cout << trait7 << endl;
    
    return 0;
}