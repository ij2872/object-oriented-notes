#include <iostream>

using namespace std;

// In: 23a4
// Out: 23 a4
// a4 is still in the buffer

int main(){

    int a;
    string b;

    cin >> a >>b;
    cout << a << " " << b << endl;

    return 0;
}