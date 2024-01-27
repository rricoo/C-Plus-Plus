/*
 * Promotion von Werten
 * Markus Burth, 20.02.2022
 */


#include <iostream>
using namespace std;

int main() {
    
    int ergInt;
    double ergDouble;
    
    ergInt = 10 / 3;
    ergDouble = 10.0 / 3.0;
    
    cout << ergInt << endl;
    cout << ergDouble<< endl;
    
    ergDouble = 10 / 3.0;
    cout << ergDouble << endl;
    
    ergInt = 10 / 3.0;
    cout << ergInt << endl;
    
    return 0;
    
}