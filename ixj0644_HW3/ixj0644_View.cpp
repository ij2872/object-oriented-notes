#include "ixj0644_View.h"


View::View(Pea_Plant& pp): pea_plant(pp){};

void View::get_menu(){
    cout << "printing menu" << endl;
}

void View::prompt_for_allele_letter(){
    cout << "Prompting for allele letter" << endl;
}

void View::prompt_for_allele_dominance(){
    cout << "Prompting for allele dominance" << endl;
}

void View::prompt_for_trait_name(){
    cout << "Prompting for trait name " << endl;
}

void View::view_all_traits(){
    cout << "Priting all traits" << endl;
}
