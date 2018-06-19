#include <iostream>
#include <map>
#include "ixj0644_Genotype.h"


using namespace std;

class Pea_Plant_Traits{
public:
    Pea_Plant_Traits();
    string get_seed_shape_Phenotype(Genotype genotype);
    string get_seed_color_Phenotype(Genotype genotype);
    string get_pod_shape_Phenotype(Genotype genotype);
    string get_pod_color_Phenotype(Genotype genotype);
    string get_flower_color_Phenotype(Genotype genotype);
    string get_flower_position_Phenotype(Genotype genotype);
    string get_plant_height_Phenotype(Genotype genotype);

private:
    map<Genotype, string> seed_shape;
    map<Genotype, string> seed_color;
    map<Genotype, string> pod_shape;
    map<Genotype, string> pod_color;
    map<Genotype, string> flower_color;
    map<Genotype, string> flower_position;
    map<Genotype, string> plant_height;

};
