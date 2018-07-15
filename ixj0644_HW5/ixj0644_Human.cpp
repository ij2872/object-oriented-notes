#include "ixj0644_Human.h"


Human::Human(){
    name = "Bobby"; 

    // Make Human
    this->gender = {
        "Gender",
        Genotype(Allele('X', false), Allele('X', true)),
        "Female"
    };

    this->rh_factor = {
        "Rh Factor",
         Genotype(Allele('P', true), Allele('P', true)),
         "Positive"
    };

    this->handedness = {
        "Handedness",
         Genotype(Allele('R', true), Allele('R', true)),
         "Right"
    };
}

//@TODO: Return all traits
string Human::view_all_traits(){
    stringstream ss;

    ss << "Gender" << endl;
    ss << "Genotype: " << this->gender.get_genotype_str() << endl;
    ss << "Phenotype: " << this->gender.get_phenotype() << endl << endl;
    
    ss << "Rh Factor" << endl;
    ss << "Genotype: " << this->rh_factor.get_genotype_str() << endl;
    ss << "Phenotype: " << this->rh_factor.get_phenotype() << endl << endl;
    
    ss << "Handedness" << endl;
    ss << "Genotype: " << this->handedness.get_genotype_str() << endl;
    ss << "Phenotype: " << this->handedness.get_phenotype() << endl << endl;

    return ss.str();
}
    

void Human::add_gender(Trait t){ 
    // Must test exception cases without using trait_type_matches
    char allele2_char = t.get_genotype().get_allele_two().get_letter(); 
    
    if(t.get_genotype().get_allele_one().get_letter() != 'X'){
        throw bad_trait();
    }else if(allele2_char != 'X' || allele2_char != 'Y')
    {
        throw bad_trait();
    }
    else
        this->gender = t;
}

void Human::add_rh_factor(Trait t){
    if(!trait_type_matches(t, 'P'))
        throw bad_trait();
    else
        this->rh_factor = t;
}

void Human::add_handedness(Trait t){
    if(!trait_type_matches(t, 'R'))
        throw bad_trait();
    else
        this->handedness = t;
}


// trait_type_matches()
//      Ensures that the trait given contains the given allele_type char in both of traits alleles.
// @params 
//      {Trait} t1              -trait to test
//      {char}  allele_type     -Upper cased allele letter to compare with t1 for match
bool Human::trait_type_matches(Trait t, char allele_type){
    // Compare first allele
    if(toupper(t.get_genotype().get_allele_one().get_letter()) != allele_type){
        return false;
    }
    // compare second allele
    if(toupper(t.get_genotype().get_allele_two().get_letter()) != allele_type){
        return false;
    }

    return true;
}
