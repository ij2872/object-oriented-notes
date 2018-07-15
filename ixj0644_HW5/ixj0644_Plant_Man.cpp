#include "ixj0644_Plant_Man.h"



Plant_Man::Plant_Man(){
    Human::name = "Robert";
}

string Plant_Man::view_all_traits(){
    stringstream ss;
    
    ss << "Name: " << Human::get_name() << endl;
    ss << Pea_Plant::view_all_traits() << endl;
    ss << Human::view_all_traits() << endl;

    return ss.str();
}





