#include "ixj0644_Allele.h"

using namespace std; // delete this later


Allele::Allele(char i, bool d){
    this->letter = i;
    this->dominance = d;
}

char Allele::get_letter(){
    return letter;
}

bool Allele::get_dominance(){
    return dominance;
}

ostream& operator<<(ostream& ost, Allele& rhs){
    ost << rhs.get_letter() << ": Dominance= " << rhs.get_dominance();
    return ost;
}



