#include "ixj0644_Pea_Plant_Trait_Maps.h"
#include "ixj0644_Pea_Plant.h"
#include "ixj0644_View.h"

class Controller{
public:
    Controller(Pea_Plant& pp, View& v): pea_plant(pp), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void add_trait();

private:
    Pea_Plant& pea_plant;
    View& view;
    Pea_Plant_Trait_Maps pptm;

};