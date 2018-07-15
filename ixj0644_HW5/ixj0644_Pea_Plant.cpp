#include "ixj0644_Pea_Plant.h"



Pea_Plant::Pea_Plant(){
    this->name = "Poppy";

    seed_color = {
        "Seed Color",
        Genotype(Allele('Y', true), Allele('y', false)),
        "Yellow"};

    pod_color = {
        "Pod Color",
        Genotype(Allele('G', true), Allele('g', false)),
        "Green"};

    plant_height = {
        "Plant Height",
        Genotype(Allele('T', true), Allele('t', false)),
        "Tall"};
}

/*  view_all_traits() - returns a string by using stringstream
    @return {string} string value of all traits
*/
string Pea_Plant::view_all_traits(){
    stringstream ss;
    
   
    ss << "Seed Color" << endl;
    ss << "Genotype: " << this->seed_color.get_genotype_str() << endl;
    ss << "Phenotype: " << this->seed_color.get_phenotype() << endl << endl;
    
    ss << "Pod Color" << endl;
    ss << "Genotype: " << this->pod_color.get_genotype_str() << endl;
    ss << "Phenotype: " << this->pod_color.get_phenotype() << endl << endl;
      
    ss << "Plant Height" << endl;
    ss << "Genotype: " << this->plant_height.get_genotype_str() << endl;
    ss << "Phenotype: " << this->plant_height.get_phenotype() << endl << endl;
    

    return ss.str();
}

void Pea_Plant::add_seed_color(Trait t){
    // User gives wrong Trait type
    if(!trait_type_matches(t, 'Y'))
        throw bad_trait();
    else
        this->seed_color = t;
}

void Pea_Plant::add_pod_color(Trait t){
    // User gives wrong Trait type
    if(!trait_type_matches(t, 'G'))
        throw bad_trait();

    this->pod_color = t;
}   

void Pea_Plant::add_plant_height(Trait t){
    // User gives wrong Trait type
    if(!trait_type_matches(t, 'T'))
        throw bad_trait();
    else
        this->plant_height = t;
}

// trait_type_matches()
//      Ensures that the trait given contains the given allele_type char in both of traits alleles.
// @params 
//      {Trait} t1              -trait to test
//      {char}  allele_type     -Upper cased allele letter to compare with t1 for match
bool Pea_Plant::trait_type_matches(Trait t, char allele_type){
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


