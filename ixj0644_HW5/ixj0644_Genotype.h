#ifndef ixj0644_Genotype_h
#define ixj0644_Genotype_h

#include "ixj0644_Allele.h"
#include <exception>

class bad_letter: public std::exception{};

class Genotype{
public:
    Genotype() = default;
    Genotype(Allele a_one, Allele a_two);
    Allele get_allele_one() const;
    Allele get_allele_two() const;
    bool operator<(const Genotype &rhs) const;
    
private:
    Allele allele_one;
    Allele allele_two;

};
#endif
