#include "ixj0644_Trait.h"
#include "ixj0644_Living_Thing.h"
#include <exception>
#include <cctype>
using namespace std;

#ifndef BAD_TRAIT_H
#define BAD_TRAIT_H
class bad_trait: public exception{};
#endif

#ifndef PEA_PLANT_H
#define PEA_PLANT_H
class Pea_Plant: public Living_Thing {
public:
    Pea_Plant();
    string view_all_traits();
    void add_seed_color(Trait t);
    void add_pod_color(Trait t);
    void add_plant_height(Trait t);

private:
    Trait seed_color;
    Trait pod_color;
    Trait plant_height;
    bool trait_type_matches(Trait, char);
};

#endif
