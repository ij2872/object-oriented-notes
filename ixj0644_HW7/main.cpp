#include <iostream>
#include <array>
#include <vector>

using namespace std;

vector<string> get_di_cross(){
    vector<string> result;
    string command("./geno.exe Tt Tt Gg gg");

    array<char, 128> buffer;

    FILE* pipe = popen(command.c_str(), "r");
    
    if(!pipe){
        cout << " Couldnt start command." << endl;     
    }

    while(fgets(buffer.data(), 128, pipe) != NULL){
        //result += buffer.data();
        result.push_back(buffer.data());
    }
    auto returnCode = pclose(pipe);
   
    return result;
    //cout << result << endl;
}

int main(){

    vector<string> di_cross;
    di_cross = get_di_cross();
  
    for(string& s : di_cross){
        cout << s;
    }
    cout << endl;
  
  
    return 0;
}


