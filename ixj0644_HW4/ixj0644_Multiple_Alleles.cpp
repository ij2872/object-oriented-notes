#include "ixj0644_Multiple_Alleles.h"


char Multiple_Alleles::get_letter_two() const{
    return this->letter_two;
}

ostream& operator<<(ostream& ost, Multiple_Alleles& rhs){
    
    ost << rhs.get_letter() << rhs.get_letter_two() << ": Dominance=" << rhs.get_dominance(); 
    return ost; 
}




