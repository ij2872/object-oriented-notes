#include "ixj0644_Trait.h"
#include "ixj0644_Living_Thing.h"
#include <cctype>
#include <exception>
#include <sstream>

using namespace std;

#ifndef BAD_TRAIT_H
#define BAD_TRAIT_H
class bad_trait: public exception{};
#endif

#ifndef HUMAN_H
#define HUMAN_H
class Human: public Living_Thing{
    public:
        Human();
        string view_all_traits();
        void add_gender(Trait);
        void add_rh_factor(Trait);
        void add_handedness(Trait);        

    protected:
        Trait gender;
        Trait rh_factor;
        Trait handedness;
        bool trait_type_matches(Trait, char);
};
#endif

