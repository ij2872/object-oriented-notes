#include "Pea_Plant.h"


using namespace std;

class View{
public:
    View(Pea_Plant& pp);
    void get_menu();
    void prompt_for_allele_letter();
    void prompt_for_allele_dominance();
    void prompt_for_trait_name();
    void view_all_traits();

private:
    Pea_Plant& pea_plant();

};