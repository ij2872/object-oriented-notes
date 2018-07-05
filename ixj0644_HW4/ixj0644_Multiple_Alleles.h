#include <iostream>
#include "ixj0644_Allele.h"

using namespace std;

class Multiple_Alleles : public Allele{
    public:
        Multiple_Alleles() = default;
        Multiple_Alleles(char i, bool d, char l_two):
                        Allele(i, d), letter_two(l_two){};
        char get_letter_two() const;
        friend ostream& operator<<(ostream& ost, Multiple_Alleles& rhs);
    
    private:
        char letter_two;

};









