#include "ixj0644_HW2/ixj0644_Allele.h"

class Genotype{
public:
    Genotype(Allele a_one, Allele a_two);
    Allele get_allele_one();
    Allele get_allele_two();
    bool operator<(const Genotype& rhs) const;

private:
    Allele allele_one;
    Allele allele_two;

};
