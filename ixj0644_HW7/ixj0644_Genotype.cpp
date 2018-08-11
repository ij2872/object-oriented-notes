#include "ixj0644_Genotype.h"

/* 
    Genotype(Allele a_one, Allele a_two)
        - set private variables allele_one & allele_two from a_one & _two
        - allele_one must be dominante, while allele_two is recessive, otherwise it doesn't matter
    @params {Allele} a_one first Allele
            {Allele} a_two second Allele
*/
Genotype::Genotype(Allele a_one, Allele a_two){

    // if only one allele is dominate
    if(a_one.get_dominance() != a_two.get_dominance()){
        // set dominate to allele_one
        if (a_one.get_dominance() == true){
            this->allele_one = a_one;
            this->allele_two = a_two;
            return;
        }
    }
    // Otherwise set any allele to a_one
    this->allele_one = a_one;
    this->allele_two = a_two;
}

/* 
    get_allele_one() 
    @return {Allele} returns allele_one
*/
Allele Genotype::get_allele_one() const{
    return allele_one;
}

/* 
    get_allele_two()
    @return {Allele} returns allele_two
*/
Allele Genotype::get_allele_two() const{
    return allele_two;
}

/* 
    operator<()
        - Overloading the < operator.
        - comparision must be done on the char values of the alleles.
        - Example: AA would be 65+65=130, which is less than 97+97=194
    @return {bool} true if allele_one < allele_two 
*/
bool Genotype::operator<(const Genotype &rhs) const{

    int genotype_one_value = (int) this->get_allele_one().get_letter() + (int) this->get_allele_two().get_letter();
    int genotype_two_value = (int) rhs.get_allele_one().get_letter() + (int) rhs.get_allele_two().get_letter();

    return genotype_one_value < genotype_two_value;
}
