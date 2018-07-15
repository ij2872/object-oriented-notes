#include "ixj0644_Allele.h"

using namespace std; // delete this later




Allele::Allele(char i, bool d){
    
    // Exception: Mismatched case of letter and dominance Boolean
    
    if((isupper(i) && d == false) || (islower(i) && d == true)){
        // Check for case for Gender, in which alleles are X: false and Y true
        if(i=='X' && d == false){
            this->letter = i;
            this->dominance = d;
            return;
        }
        throw bad_letter_dominance();
    }else{
        this->letter = i;
        this->dominance = d;
    }
}

char Allele::get_letter(){
    return letter;
}

bool Allele::get_dominance(){
    return dominance;
}
