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


class Date{

public:
    Date(int y, int m, int d){
        year = y;
        month = m;
        day = d;
    }

    int getYear() { return year;}
    int getMonth(){ return month;}
    int getDay()  { return day;}

    void setYear(int yr) {
        year = yr;
    }
    void setDay(int dy) {
        day = dy;
    }
    void setMonth(int mth) {
        if(mth < 1 || mth > 12){
            cout << "Not valid" << endl;
        }
        month = mth
    }

    void print(){
        cout << "The date is " << month << "/" << day << "/" << year << endl;
    }

// private stuff at the bottom, public top.
private:
    int year;
    int month;
    int day;
};


int main(){

    Date date {2018, 6, 12};
    date.print();
    return 0;
}
