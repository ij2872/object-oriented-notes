#include "ixj0644_Allele.h"


class Genotype{
public:
    Genotype() = default;
    Genotype(Allele a_one, Allele a_two);
    Allele get_allele_one() const;
    Allele get_allele_two() const;
    bool operator <(const Genotype& rhs);
    
private:
    Allele allele_one;
    Allele allele_two;

};
