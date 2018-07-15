#include <exception>
#include <cctype>

class bad_letter_dominance: public std::exception{};

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

private:

    char letter;
    bool dominance;
};

