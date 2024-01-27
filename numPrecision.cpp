/*
 * Mit "precision" Nachkommastellen festlegen
 * Markus Burth, 17.02.2022
 */

#include <iostream>
using namespace std;

int main() {
    int alter = 25;
    double quote = 0.123456789;
    double quote2 = 12345.6789;
    double quote3 = 123456789;
    
    cout << 3 << endl << endl;
    cout << "Alter: " << alter << endl << endl;
    
    cout << "Quote 1: " << quote << endl;
    cout << "Quote 2: " << quote2 << endl;
    cout << "Quote 3: " << quote3 << endl << endl;
    
    /* Nachkommastellen auf zwei festlegen */
    cout.precision(2);
    cout << "Quote 1: " << quote << endl;
    cout << "Quote 2: " << quote2 << endl;
    cout << "Quote 3: " << quote3 << endl;
    
    return 0;
}