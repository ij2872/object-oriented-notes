#include "ixj0644_Genotype.h"
#include <map>

using namespace std;

class Human_Trait_Maps{
    public:
        Human_Trait_Maps();
        string get_gender_phenotype(Genotype genotype);
        string get_rh_factor(Genotype genotype);
        string get_handedness(Genotype genotype);

    protected:
        map<Genotype, string> gender;
        map<Genotype, string> rh_factor;
        map<Genotype, string> handedness;

};

