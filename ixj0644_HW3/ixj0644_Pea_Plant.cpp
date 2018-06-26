#include "ixj0644_Pea_Plant.h"



Pea_Plant::Pea_Plant(){
    
    seed_shape = {
        "Seed Shape",
        Genotype(Allele('R', true), Allele('r', false)),
        "Round"};

    seed_color = {
        "Seed Color",
        Genotype(Allele('Y', true), Allele('y', false)),
        "Yellow"};

    pod_shape = {
        "Pod Shape",
        Genotype(Allele('I', true), Allele('i', false)),
        "Inflated"};

    pod_color = {
        "Pod Color",
        Genotype(Allele('G', true), Allele('g', false)),
        "Green"};

    flower_color = {
        "Flower Color",
        Genotype(Allele('P', true), Allele('p', false)),
        "Purple"};

    flower_position = {
        "Flower Position",
        Genotype(Allele('A', true), Allele('a', false)),
        "Axial"};

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
    
    ss << "Seed Shape" << endl;
    ss << "Genotype: " << this->seed_shape.get_genotype_str() << endl;
    ss << "Phenotype: " << this->seed_shape.get_phenotype() << endl << endl;
    
    ss << "Seed Color" << endl;
    ss << "Genotype: " << this->seed_color.get_genotype_str() << endl;
    ss << "Phenotype: " << this->seed_color.get_phenotype() << endl << endl;
    
    ss << "Pod Shape" << endl;
    ss << "Genotype: " << this->pod_shape.get_genotype_str() << endl;
    ss << "Phenotype: " << this->pod_shape.get_phenotype() << endl << endl;
    
    ss << "Pod Color" << endl;
    ss << "Genotype: " << this->pod_color.get_genotype_str() << endl;
    ss << "Phenotype: " << this->pod_color.get_phenotype() << endl << endl;
    
    ss << "Flower Color" << endl;
    ss << "Genotype: " << this->flower_color.get_genotype_str() << endl;
    ss << "Phenotype: " << this->flower_color.get_phenotype() << endl << endl;
    
    ss << "Flower Position" << endl;
    ss << "Genotype: " << this->flower_position.get_genotype_str() << endl;
    ss << "Phenotype: " << this->flower_position.get_phenotype() << endl << endl;
    
    ss << "Plant Height" << endl;
    ss << "Genotype: " << this->plant_height.get_genotype_str() << endl;
    ss << "Phenotype: " << this->plant_height.get_phenotype() << endl << endl;
    

    return ss.str();
}

// @TODO:   add methods should have a trait validator.
//          We are implying user will not use invalid input.

void Pea_Plant::add_seed_shape(Trait t){
    this->seed_shape = t;
}

void Pea_Plant::add_seed_color(Trait t){
    this->seed_color = t;
}

void Pea_Plant::add_pod_shape(Trait t){
    this->pod_shape = t;
}

void Pea_Plant::add_pod_color(Trait t){
    this->pod_color = t;
}   

void Pea_Plant::add_flower_color(Trait t){
    this->flower_color = t;
}

void Pea_Plant::add_flower_position(Trait t){
    this->flower_position = t;
}

void Pea_Plant::add_plant_height(Trait t){
    this->plant_height = t;
}

