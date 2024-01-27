/*
 * Wurzel aus Ganzzahl berechnen und negative Zahlen
 * ausschliessen
 * Markus Burth, 20.02.2022
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double eingabe, wurzel;
    
    cout << " Geben Sie eine positive Zahl ein: " << endl;
    cin >> eingabe;
    
    if(eingabe >= 0) {
        wurzel = sqrt(eingabe);
        cout << " Wurzel von " << eingabe << " - "
             << wurzel << endl;
    }
    else {
        cout << " Die Wurzel negativer Zahlen kann nicht "
                "berechnet werden." << endl;
    }
    
    return 0;
}