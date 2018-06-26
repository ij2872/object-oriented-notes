#include "ixj0644_Controller.h"


void Controller::cli(){
    system("clear");
    cout << "\nRunning control" << endl;
    int cmd = -1;

    while(cmd != 0){
    
        view.get_menu();

        cin >> cmd;
        execute_cmd(cmd);
        

    }
}

void Controller::execute_cmd(int cmd){

    // Run commands
    switch(cmd){
        case 0:
            cout << "Closing Program" << endl;
            break;
        case 1:
            cout << "View Plant" << endl;
            
            // Print out all traits from plant
            view.view_all_traits();
            break;

        case 2:

            // Handle user input to change a trait from plant
            Controller::add_trait();
            break;

        default:
            cout << "Command not found" << endl;
            break;
    }
}

// Ask user for allele one and two. Set dominance based on uppercase.
// change trait of user selected trait, with new constructed genotype
void Controller::traitModify(string s){
    char a1, a2;
    bool b1, b2;
    Genotype userGeo;

    view.prompt_for_allele_letter();
            
    cin >> a1;
    b1 = isupper(a1);
    
    view.prompt_for_allele_letter();
    cin >> a2;
    b2 = isupper(a2);


    cout << endl;

    userGeo = Genotype(Allele(a1, b1), Allele(a2, b2));

    // Change trait of pea plant
    if(s == "Seed Color"){
        pea_plant.add_seed_color(
            Trait(
                s,
                userGeo,
                pptm.get_seed_color_Phenotype(userGeo)
            )
        );
    }else if(s == "Seed Shape"){
        pea_plant.add_seed_shape(
            Trait(
                s,
                userGeo,
                pptm.get_seed_shape_Phenotype(userGeo)
            )
        );
    }else if(s == "Pod Color"){
        pea_plant.add_pod_color(
            Trait(
                s,
                userGeo,
                pptm.get_pod_color_Phenotype(userGeo)
            )
        );
    }else if(s == "Pod Shape"){
        pea_plant.add_pod_shape(
            Trait(
                s,
                userGeo,
                pptm.get_pod_shape_Phenotype(userGeo)
            )
        );
    }else if(s == "Flower Color"){
        pea_plant.add_flower_color(
            Trait(
                s,
                userGeo,
                pptm.get_flower_color_Phenotype(userGeo)
            )
        );
    }else if(s == "Flower Position"){
        pea_plant.add_flower_position(
            Trait(
                s,
                userGeo,
                pptm.get_flower_position_Phenotype(userGeo)
            )
        );
    }else if(s == "Plant Height"){
        pea_plant.add_plant_height(
            Trait(
                s,
                userGeo,
                pptm.get_plant_height_Phenotype(userGeo)
            )
        );
    }
    
}

// set_trait() is a better name for what the method actually does.
// ask user for which trait to change
void Controller::add_trait(){
    view.prompt_for_trait_name();

    int userOption;
    cin >> userOption;

    switch(userOption){
        case 1:
            traitModify("Seed Shape");
            break;
        case 2:
            traitModify("Seed Color");
            break;
        case 3:
            traitModify("Pod Shape");
            break;
        case 4:
            traitModify("Pod Color");
            break;
        case 5:
            traitModify("Flower Color");
            break;
        case 6:
            traitModify("Flower Position");
            break;
        case 7:
            traitModify("Plant Height");
            break;

        default:
            break;
    }
}

