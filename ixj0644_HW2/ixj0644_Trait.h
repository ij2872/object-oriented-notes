#include "ixj0644_Genotype.h"

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
    string get_name();
    Genotype get_genotype();
    string get_phenotype();

private:
    string name;
    Genotype genotype;
    string phenotype;
};
