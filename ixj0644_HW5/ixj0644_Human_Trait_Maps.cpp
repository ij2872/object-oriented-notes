#include "ixj0644_Human_Trait_Maps.h"



Human_Trait_Maps::Human_Trait_Maps(){
    // Append values to each map
    
    // Gender
    gender.insert(pair<Genotype, string>(
        Genotype(
            Allele('X', false),
            Allele('Y', true)    
        ),
        "Male"        
    ));
    
    gender.insert(pair<Genotype, string>(
        Genotype(
            Allele('X', false),
            Allele('X', false)    
        ),
        "Female"        
    ));
    
    // Rh Factor (+/- Blood Type)
    rh_factor.insert(pair<Genotype, string>(
            Genotype(
                Allele('P', true),
                Allele('P', true)    
            ),
            "Positive"
    ));

    rh_factor.insert(pair<Genotype, string>(
            Genotype(
                Allele('P', true),
                Allele('p', false)    
            ),
            "Positive"
    ));

    rh_factor.insert(pair<Genotype, string>(
            Genotype(
                Allele('p', false),
                Allele('p', false)    
            ),
            "Negative"
    ));

    // handedness
    handedness.insert(pair<Genotype, string>(
            Genotype(
                Allele('R', true),
                Allele('R', true)    
            ),
            "Right"
    ));

    handedness.insert(pair<Genotype, string>(
            Genotype(
                Allele('R', true),
                Allele('r', false)    
            ),
            "Right"
    ));
    
    handedness.insert(pair<Genotype, string>(
            Genotype(
                Allele('r', false),
                Allele('r', false)    
            ),
            "Left"
    ));

}



string Human_Trait_Maps::get_gender_phenotype(Genotype genotype){
    return gender[genotype];
}

string Human_Trait_Maps::get_rh_factor(Genotype genotype){
    return rh_factor[genotype];
}

string Human_Trait_Maps::get_handedness(Genotype genotype){
    return handedness[genotype];
}




