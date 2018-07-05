#include <iostream>
#include "ixj0644_Allele.h"
#include "ixj0644_Multiple_Alleles.h"

using namespace std;


int main(){
    Allele a {'c', true};
    Multiple_Alleles ma {'a', true, 'b'};
    
    cout << a.get_letter() << ":" << a.get_dominance() << endl;
    cout << a << endl;

    cout << ma.get_letter() << ": " << ma.get_dominance() << ": " << ma.get_letter_two() << endl;
    cout << ma << endl;



    return 0;
}









