#include <iostream>

#ifndef LIVING_THING_H
#define LIVING_THING_H

using namespace std;

class Living_Thing{
    public:
        Living_Thing(){};
        Living_Thing(string str);
        string get_name();
        virtual string view_all_traits() = 0;

    protected:
        string name;    

};
#endif

