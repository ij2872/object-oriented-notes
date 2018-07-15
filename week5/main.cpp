#include <iostream>

using namespace std;


int main(){

    string input;

    cout << "starting up reader" << endl;
    while(input != "q"){
        cout << "Reading: ";
        cin >> input;
        cout << input << endl;
    }

    cout << "Done reading" << endl;
    return 0;
}






