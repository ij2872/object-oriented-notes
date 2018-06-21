#include "View.h"
#include "ixj0644_Pea_Plant_Trait_Maps.h"

class Controller{
public:
    Controller(Pea_Plant& pp, View& v);
    void cli();
    void execute_cmd(int cmd);
    void add_trait();

private:
    Pea_Plant& pea_plant;
    View& view;
    Pea_Plant_Trait_Maps pptm;

};
