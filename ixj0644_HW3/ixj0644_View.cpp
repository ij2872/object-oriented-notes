#include "ixj0644_View.h"


View::View(Pea_Plant& pp): pea_plant(pp){};

void View::get_menu(){
    cout << R"(

=======================Menu=======================
(1) View Plant
(2) Change Trait
--------------------------------------------------
(0) Exit Program
==================================================

)";

}

void View::prompt_for_allele_letter(){
    cout << "Enter Allele: ";
}

void View::prompt_for_allele_dominance(){
    cout << endl << "Dominante (yes=1, no=0): ";
}

void View::prompt_for_trait_name(){
    cout << R"(
------------
Change Trait
------------
1) Seed Shape
2) Seed Color
3) Pod Shape
4) Pod Color
5) Flower Color
6) Flower Position
7) Plant Height
------------
)";
}

void View::view_all_traits(){
    cout << "Priting all traits" << endl << endl;
    cout << pea_plant.view_all_traits() << endl;
    
}
