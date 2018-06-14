
class Allele{
public:

    /*
     Allele - comment on what it does
     @params {char} i letter 
             {bool} d dominance
    */
    Allele(char i, bool d);

    // @returns {char} get_letter() returns current character
    char get_letter();

    // @returns {bool} get_dominance returns boolean state of Allele
    bool get_dominance();

private:

    char letter;
    bool dominance;
};
