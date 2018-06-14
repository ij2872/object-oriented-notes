#include "ixj0644_HW2/ixj0644_Genotype.h"
#include <iostream>

using namespace std;

class Trait{
public:
    Trait(string n, Genotype g, string p);
    string get_name();
    Genotype get_genotype();
    string get_phenotype();

private:
    string name;
    Genotype genotype;
    string phenotype;
};
