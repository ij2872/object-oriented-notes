#include "ixj0644_Genotype.h"
#include <sstream>
#include <iostream>

using namespace std;

class Trait{
public:
    Trait() = default;
    

    /* 
    Trait(string, Genotype, string)
        @params 
            {string} n: name of trait "seed color"
            {Genotype} g: genotype for the trait
            {string} p: phenotype for the trait
    */
    Trait(string n, Genotype g, string p);
    string get_name() const;
    Genotype get_genotype() const;
    string get_genotype_str() const;
    string get_phenotype() const;
    friend ostream& operator<<(ostream& ost, const Trait& trt);

private:
    string name;
    Genotype genotype;
    string phenotype;
};


