#include "ixj0644_Controller.h"

void Controller::cli(){
    cout << "Running controll" << endl;
    cout << R"(
    Menu Options:
        (1) Run Command 1
        (2) Add Trait
        
        (0) Close Program
    )";

    int cmd = -1;
    cin >> cmd;
    execute_cmd(cmd);
}

void Controller::execute_cmd(int cmd){

    // Run commands
    switch(cmd){
        case 1:
            cout << "Running command (1)";
            break;

        case 2:
            cout << "Running add_trait (2)";
            break;

        default:
            cout << "Command not found" << endl;
            break;
    }
}

void Controller::add_trait(){
    cout << "Adding trait" << endl;
}
