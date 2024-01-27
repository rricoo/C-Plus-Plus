/*
 * Kubikzahl dynamisch berechnen
 * Markus Burth, 20.02.2022
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main() {
     
     double kubikzahl = 0.0;
     int zahl = 0;
     
     /*
     // mit Zaehlschleife
     for(int n = 1; n <= 10; n++) {
         kubikzahl = pow(n,3.0);
         cout << n << " hoch 3 = " << kubikzahl << endl;
     }*/
    
     /*
     // mit while Schleife umgesetzt
     int n = 1;
     while(n <= 10) {
         kubikzahl = pow(n,3.0);
         cout << n << " hoch 3 = " << kubikzahl << endl;
         n++;
     }
     */
     
     // mit do-while Schleife
     
     do {
         cout << "Bitte geben Sie eine Zahl ein (0) zum Beenden: " << endl;
         cin >> zahl;
         kubikzahl = pow(zahl, 3.0);
         cout << " " << zahl << " hoch 3 = " << kubikzahl << endl << endl;
     }
     while (zahl != 0);
     
     /*
     // Potenzwert berechnen
     double basis, exponent, potenzwert;
     int n;
     
     cout << "Bitte den Basis eingeben: " << endl;
     cin >> basis;
     cout << "Bitte den Exponent angeben: " << endl;
     cin >> exponent;
     
     potenzwert = pow(basis,exponent);
     cout << basis << " hoch " << exponent << " gleich: " << potenzwert << endl;
     */
     
     return 0;
 }