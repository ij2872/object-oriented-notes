#include <iostream>

using namespace std;


// TO STUDY:
//  Encapsulation
//  Inheritance
//  Polyymorphism

class myObj{
    private:
        string name;
        int number;

    public:
        myObj(string str, int num){
            name = str;
            number = num;
        }
        void print(){
            cout << "Name: " << name << " number: " << number << endl;
        }
};





int main(){

    myObj var1 {"bob", 30};


    var1.print();

    return 0;
}
