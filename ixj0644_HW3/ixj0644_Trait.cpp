#include "ixj0644_Trait.h"


/* 
    Trait(string, Genotype, string)
    @params 
        {string} n: name of trait "seed color"
        {Genotype} g: genotype for the trait
        {string} p: phenotype for the trait
*/

Trait::Trait(string n, Genotype g, string p){
    this->name = n;
    this->genotype = g;
    this->phenotype = p;
}

string Trait::get_name() const{
    return this->name;
}

Genotype Trait::get_genotype() const{
    return this->genotype;
}

string Trait::get_genotype_str() const{
    stringstream ss;
    ss << this->genotype.get_allele_one().get_letter() << this->genotype.get_allele_two().get_letter();
    return ss.str();
}

string Trait::get_phenotype() const{
    return this->phenotype;
}

/* 
    operator <<
    
    @return {ostream&} "Name:      ${name}
                        Genotype:  ${allele_one.letter} ${allele_two.letter}
                        Phenotype: ${phenotype variable}
                        "
 */
ostream& operator<<(ostream& ost, const Trait& trt){
    ost << "Name: " << trt.name << endl\
    << "Genotype: " << trt.get_genotype().get_allele_one().get_letter() \
    << trt.get_genotype().get_allele_two().get_letter() << endl\
    << "Phenotype: " << trt.get_phenotype() << endl;

    return ost;
}