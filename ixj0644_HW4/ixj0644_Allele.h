#ifndef ixj0644_Allele_h
#define ixj0644_Allele_h
#include <iostream>


using namespace std;

class Allele{
public:
   Allele() = default;
    
    /*
     Allele - comment on what it does
     @params {char} i letter 
             {bool} d dominance
    */
    Allele(char i, bool d);

    // @returns {char} get_letter() returns letter of Allele
    char get_letter();

    // @returns {bool} get_dominance true if dominate, false if recessive
    bool get_dominance();
    
    friend std::ostream& operator<<(ostream& ost, Allele& rhs);

protected:
    char letter;
    bool dominance;

};

#endif
