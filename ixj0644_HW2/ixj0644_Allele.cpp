#include "ixj0644_Allele.h"

using namespace std;
// Does this and this.
Allele::Allele(char i, bool d){
    this->letter = i;
    this->dominance = d;
}

// Does this
char Allele::get_letter(){
    return letter;
}

// Does this
bool Allele::get_dominance(){
    return dominance;
}
