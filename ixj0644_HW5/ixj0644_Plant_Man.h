#include "ixj0644_Pea_Plant.h"
#include "ixj0644_Human.h"


class Plant_Man: public Pea_Plant, public Human{
    public:
        Plant_Man();
        string view_all_traits();
};

