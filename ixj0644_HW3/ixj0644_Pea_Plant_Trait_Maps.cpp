#include "ixj0644_Pea_Plant_Trait_Maps.h"

// ---------- Pea_Plant_Trait_Maps ----------

Pea_Plant_Trait_Maps::Pea_Plant_Trait_Maps(){

    // seed_shape
    seed_shape.insert(pair<Genotype, string>(
        Genotype(
            Allele('R', true),
            Allele('R', true)
        ),
        "Round"
    ));
    
    seed_shape.insert(pair<Genotype, string>(
        Genotype(
            Allele('R', true),
            Allele('r', false)
        ),
        "Round"
    ));

    seed_shape.insert(pair<Genotype, string>(
        Genotype(
            Allele('r', false),
            Allele('r', false)
        ),
        "Wrinkled"
    ));

    
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

    // pod shape
    pod_shape.insert(pair<Genotype, string>(
        Genotype(
            Allele('I', true),
            Allele('I', true)
        ),
        "Inflated"
    ));

    seed_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('I', true),
            Allele('i', false)
        ),
        "Inflated"
    ));

    seed_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('i', false),
            Allele('i', false)
        ),
        "Constricted"
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

    // flower color
    flower_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('P', true),
            Allele('P', true)
        ),
        "Purple"
    ));

    flower_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('P', true),
            Allele('p', false)
        ),
        "Purple"
    ));

    flower_color.insert(pair<Genotype, string>(
        Genotype(
            Allele('p', false),
            Allele('p', false)
        ),
        "White"
    ));

    // flower position
    flower_position.insert(pair<Genotype, string>(
        Genotype(
            Allele('A', true),
            Allele('A', true)
        ),
        "Axial"
    ));

    flower_position.insert(pair<Genotype, string>(
        Genotype(
            Allele('A', true),
            Allele('a', false)
        ),
        "Axial"
    ));

    flower_position.insert(pair<Genotype, string>(
        Genotype(
            Allele('a', false),
            Allele('a', false)
        ),
        "Terminal"
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

string Pea_Plant_Trait_Maps::get_seed_shape_Phenotype(Genotype genotype){
    return seed_shape[genotype];
}

string Pea_Plant_Trait_Maps::get_seed_color_Phenotype(Genotype genotype){
    return seed_color[genotype];
}

string Pea_Plant_Trait_Maps::get_pod_shape_Phenotype(Genotype genotype){
    return pod_shape[genotype];
}

string Pea_Plant_Trait_Maps::get_pod_color_Phenotype(Genotype genotype){
    return pod_color[genotype];
}

string Pea_Plant_Trait_Maps::get_flower_color_Phenotype(Genotype genotype){
    return flower_color[genotype];
}

string Pea_Plant_Trait_Maps::get_flower_position_Phenotype(Genotype genotype){
    return flower_position[genotype];
}

string Pea_Plant_Trait_Maps::get_plant_height_Phenotype(Genotype genotype){
    return plant_height[genotype];
}
