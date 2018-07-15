#include <iostream>
#include "ixj0644_Pea_Plant.h"
#include "ixj0644_Human.h"
#include "ixj0644_Plant_Man.h"
#include "ixj0644_Trait.h"
#include "ixj0644_Pea_Plant_Trait_Maps.h"
#include "ixj0644_Human_Trait_Maps.h"

using namespace std;

// Global Variables :( sorry
Pea_Plant_Trait_Maps pmap{};
Human_Trait_Maps hmap{};


// Usefull Methods
// WARNING BAD CODE AHEAD!!!
void change_plant(Pea_Plant& p){
    system("clear");
    cout << "What Trait of Pea Plant do you want to change?" << endl;
    cout << "(1) Seed Color \n(2) Pod Color \n(3) Plant Height\n\n(0) None" << endl;    
    
    int input;
    cin >> input;
    char input_char1;
    char input_char2;
    bool input_dom1;
    bool input_dom2;
    Genotype userGeno;

    switch(input){
        case 0:
            cout << "Not Changing Anything" << endl;
            break;
        case 1:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    p.add_seed_color(Trait("Seed Color",
                                userGeno,
                                pmap.get_seed_color_Phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 2:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    p.add_pod_color(Trait("Seed Color",
                                userGeno,
                                pmap.get_pod_color_Phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 3:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    p.add_plant_height(Trait("Seed Color",
                                userGeno,
                                pmap.get_plant_height_Phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        default:
            cout << "Invalid input" << endl;
    }
    
};

void change_human(Human& h){
    system("clear");
    cout << "What Trait of Human do you want to change?" << endl;
    cout << "(1) gender \n(2) rh factor \n(3) handedness\n\n(0) None" << endl;    
    
    int input;
    cin >> input;
    char input_char1;
    char input_char2;
    bool input_dom1;
    bool input_dom2;
    Genotype userGeno;

    switch(input){
        case 0:
            cout << "Not Changing Anything" << endl;
            break;
        case 1:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    h.add_gender(Trait("Gender",
                                userGeno,
                                hmap.get_gender_phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 2:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;

            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    h.add_rh_factor(Trait("Rh Factor",
                                userGeno,
                                hmap.get_rh_factor(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 3:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    h.add_handedness(Trait("Handedness",
                                userGeno,
                                hmap.get_handedness(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        default:
            cout << "Invalid input" << endl;
    }
};
void change_plant_man(Plant_Man& pm){
    system("clear");
    cout << "What Trait of Plant Man do you want to change?" << endl;
    cout << "(1) Seed Color \n(2) Pod Color \n(3) Plant Height\n";
    cout << "(4) gender \n(5) rh factor \n(6) handedness\n\n(0) None" << endl;  
    
    int input;
    cin >> input;
    char input_char1;
    char input_char2;
    bool input_dom1;
    bool input_dom2;
    Genotype userGeno;

    switch(input){
        case 0:
            cout << "Not Changing Anything" << endl;
            break;
        case 1:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    pm.add_seed_color(Trait("Seed Color",
                                userGeno,
                                pmap.get_seed_color_Phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            }catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 2:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    pm.add_pod_color(Trait("Seed Color",
                             userGeno,
                             pmap.get_pod_color_Phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 3:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    pm.add_plant_height(Trait("Seed Color",
                                userGeno,
                                pmap.get_plant_height_Phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 4:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    pm.add_gender(Trait("Gender",
                                userGeno,
                                hmap.get_gender_phenotype(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 5:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    pm.add_rh_factor(Trait("Rh Factor",
                                userGeno,
                                hmap.get_rh_factor(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        case 6:
            cout << "Enter first Allele: ";
            cin >> input_char1;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom1;
            cout << "Enter second Allele: ";
            cin >> input_char2;
            cout << "\nDominant? (0) false (1) true" << endl;
            cin >> input_dom2;
            
            try{
                userGeno = Genotype(Allele(input_char1, input_dom1), Allele(input_char2, input_dom2));
                try{
                    pm.add_handedness(Trait("Handedness",
                                userGeno,
                                hmap.get_handedness(userGeno)));
                }catch(bad_trait& e){
                    cout << "Error in Trait!" << endl;
                }
            } catch(bad_letter_dominance& e){
                cout << "Bad Trait!" << endl;
            }
            break;
        default:
            cout << "Invalid input" << endl;
    }

};
// I told you...






int main(){
	Pea_Plant plant{};
    
    cout << "----- PLANT -----" << endl;
    cout << "Name: " << plant.get_name() << endl;
    cout << plant.view_all_traits() << endl;

    cout << "----- Human -----" << endl;
    Human human{};
    cout << "Name: " << human.get_name() << endl;
    cout << human.view_all_traits() << endl;

    cout << "----- Plant Man ----" << endl;
    Plant_Man pman{};
    cout << pman.view_all_traits() << endl;


    int input = -1;
    while(input != 0){
       
        cout << "Who do you want to change or view? \n(1) Plant\n(2) Human\n(3) Plant Man\n";
        cout << "(4) View Plant" << endl; 
        cout << "(5) View Human" << endl;    
        cout << "(6) View Plant Man" << endl; 


        cout << "(0) Exit Program" << endl;
        cin >> input;
        system("clear");
        switch(input){
            case 0:
                cout << "Closing!" << endl;
                break;
            case 1:
                cout << "Changing Plant." << endl;
                change_plant(plant);
                break;
            case 2:
                cout << "Changing Human." << endl;
                change_human(human);
                break;
            case 3:
                cout << "Chaning Plant Man." << endl;
                change_plant_man(pman);
                break;
            case 4:
                cout << "Viewing Plant Traits" << endl;
                cout << "Name: " << plant.get_name() << endl;
                cout << plant.view_all_traits() << endl;
                break;
            case 5:
                cout << "Viewing Human Traits" << endl;
                cout << "Name: " << human.get_name() << endl;
                cout << human.view_all_traits() << endl;
                break;
            case 6:
                cout << "Viewing Plant Man Traits" << endl;
                cout << pman.view_all_traits();
                break;
            default:
                cout << "Unknown Command!" << endl;
       }

    }



    return 0;
}
