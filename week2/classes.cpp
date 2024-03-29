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

    // ----- GETTERS -----
    int getYear() { return year;}
    int getMonth(){ return month;}
    int getDay()  { return day;}

    // ----- SETTERS -----
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
        month = mth;
    }

    // ----- METHODS -----
    void addDay(){
        // Add day validation.
        ++day;
    }

    // Method overloading
    void addDay(int d){
        day += d;
    }

    // to_string() is a standard in classes for returning string
    string to_string(){
        return std::to_string(year) + " " + std::to_string(month) + " " + std::to_string(day);
    }

    void print(){
        cout << "The date is " << month << "/" << day << "/" << year << endl;
    }

    // ----- OVERLOADING -----

    // subtracting two dates
    // Added const since method is not changing anything
    int operator-(const Date& rhs) const{
        int diff = day - rhs.day;
        return diff;
    }

    // friend: not officially part of the class, operator belongs to streams
    friend ostream& operator<<(ostream& ost, const Date& date){
        ost << date.to_string();
        return ost;
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
    cout << date << endl;

    Date date2 {2018, 1, 1};


    return 0;
}
