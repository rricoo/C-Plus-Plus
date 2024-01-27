/*
 * Potenzwert einer Zahl berechnen
 * Markus Burth, 21.02.2022
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main () {
     
     double kubikzahl = 0.0;
     double exponent = 0.0;
     int zahl;
     
     do {
     
        cout << "\nBitte geben Sie eine Zahl ein (0) zum Beenden." << endl;
        cin >> zahl;
     
        cout << "\nBitte geben Sie noch den Exponenten ein: " << endl;
        cin >> exponent;
     
        kubikzahl = pow(zahl,exponent);
        printf("\n%d hoch %.0f ergibt %.0f\n",zahl,exponent,kubikzahl);
     }
     while (zahl != 0);
     
     
     return 0;
 }