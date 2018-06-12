#include <iostream>
#include <vector>
#include <stdio.h> // You can use C libraries!

//using namespace std;  //gets rid of having to use std::

int main(){
    // input output
    std::cout << "Hello world" << std::endl;
    int a;
    std::cin >> a;
    //std::cout << a << std::endl;
    printf("Int = %d\n", a);
    



    // ----------------
    // Vectors

    std::vector<int> v1;
    v1.push_back(1); //add to end
    std::cout << "First element in vector[0]: " << v1[0] << std::endl;

    // Fill vector
    for(int i=2; i<11; i++){
        v1.push_back(i);
    }

    // Iterate through vector, with index
    for(int i=0; i<v1.size();i++){
        std::cout << v1[i] << ",";
    }

    std::cout << std::endl;
    
    // Another way to iterate. For each int in our vector, copy onto int i.
    for(int i : v1){
        std::cout << i << "," << std::endl;
    }


    return 0;
}

// g++ -std=c++11 main.cpp && ./a.out