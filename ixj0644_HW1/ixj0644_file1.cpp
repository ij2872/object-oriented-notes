#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>

int main(){
    std::vector<std::string> userString;
    std::vector<double> userNum;

    std::string input;
    while(input != "STOP"){
        std::cout << "Enter a string. Enter STOP when finished. \n";
        std::cin >> input;

        // Concat user input
        if(input != "STOP"){
            userString.push_back(input);
        }
    }

    while(input != "-999.00"){
        std::cout << "Enter a double. Enter -999.00 to finish input. \n";
        std::cin >> input;

        // Concat user input
        if(input != "-999.00"){
            userNum.push_back(atof(input.c_str()));
        }
    }

    for(int i =0; i < fmin(userString.size(), userNum.size()); i++){
        std::cout << "stringvector[" << i << "] and doublevector[" << i <<"]" << std::endl;
    }

    return 0;
}

