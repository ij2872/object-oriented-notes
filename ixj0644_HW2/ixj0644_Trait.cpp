#include "ixj0644_Trait.h"



Trait::Trait(string n, Genotype g, string p){
    this->name = n;
    this->genotype = g;
    this->phenotype = p;
}

string Trait::get_name(){
    return this->name;
}

Genotype Trait::get_genotype(){
    return this->genotype;
}

string Trait::get_phenotype(){
    return this->phenotype;
}
