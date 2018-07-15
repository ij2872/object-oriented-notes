#include "ixj0644_Pea_Plant_Trait_Maps.h"

// ---------- Pea_Plant_Trait_Maps ----------

Pea_Plant_Trait_Maps::Pea_Plant_Trait_Maps(){

   
    // seed color
    seed_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('Y', true),
            Allele('Y', true)
        ),
        "Yellow"
    ));

    seed_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('Y', true),
            Allele('y', false)
        ),
        "Yellow"
    ));

    seed_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('y', false),
            Allele('y', false)
        ),
        "Green"
    ));

    // pod color
    pod_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('G', true),
            Allele('G', true)
        ),
        "Green"
    ));

    pod_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('G', true),
            Allele('g', false)
        ),
        "Green"
    ));

    pod_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('g', false),
            Allele('g', false)
        ),
        "Yellow"
    ));

   // plant height
    plant_height.insert(pair<Genotype, string>(
        Genotype(
            Allele('T', true),
            Allele('T', true)
        ),
        "Tall"
    ));

    plant_height.insert(pair<Genotype, string>(
        Genotype(
            Allele('T', true),
            Allele('t', false)
        ),
        "Tall"
    ));

    plant_height.insert(pair<Genotype, string>(
        Genotype(
            Allele('t', false),
            Allele('t', false)
        ),
        "Short"
    ));

}

string Pea_Plant_Trait_Maps::get_seed_color_Phenotype(Genotype genotype){
    return seed_color[genotype];
}

string Pea_Plant_Trait_Maps::get_pod_color_Phenotype(Genotype genotype){
    return pod_color[genotype];
}

string Pea_Plant_Trait_Maps::get_plant_height_Phenotype(Genotype genotype){
    return plant_height[genotype];
}
