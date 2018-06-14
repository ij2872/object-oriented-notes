#include <iostream>
#include "ixj0644_Pea_Plant_Traits.h"
#include "ixj0644_Trait.h"


using namespace std;

class Monohybrid_Calculator{
public:
    Monohybrid_Calculator(Pea_Plant_Traits tm, Trait to, Trait tt);
    Trait get_trait_one();
    Trait get_trait_two();
    Trait set_trait_one(Trait t);
    Trait set_trait_two(Trait t);
    void cross();
    string get_genotypic_ratio();
    string get_phenotypic_ratio();

private:
    Pea_Plant_Traits trait_map;
    Trait trait_one;
    Trait trait_two;
    string genotypic_ratio;
    string phenotypic_ratio;

};