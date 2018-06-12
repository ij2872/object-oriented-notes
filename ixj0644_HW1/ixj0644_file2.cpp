#include <iostream>
#include <vector>
#include <fstream> // file reading
//#include <sstream> // stringstream. Did not need
#include <ctype.h>

using namespace std;

bool isNumber(string str){
    int punctNum = 0;

    for(char& c : str){
        
        if(c=='.')
            ++punctNum;
        
        // if file contains a string or more than one punctuation, return false.
        if(isalpha(c) || punctNum > 1){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> fileContent;


    // read in file to a vector
    ifstream userFile("HW1_text2.txt");
    ofstream outFile("out.txt");

    // Open file, read content to fileContent vector
    if(userFile.is_open()){

        string line;

        // Iter. through vector
        while(getline(userFile, line)){
            fileContent.push_back(line);
        }
    } else {
        cout << "Could not open file." << endl;
    }
    
    double numTotal = 0;
    double numTotalIndex = 0; // amount of numbers found in file.

    for(string line : fileContent){

        if(isNumber(line)){
            // Line is a number
            numTotal += atof(line.c_str());
            ++numTotalIndex;
        }else{
            // Line is a string
            outFile << line << endl;
        }

    }

    // Output average of numberes
    cout << "Average of numbers in file is " << numTotal/numTotalIndex << endl;
    
    userFile.close();
    outFile.close();

    return 0;
}
