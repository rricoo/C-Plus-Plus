/*
 * Abbruchbefehle fuer while Schleifen
 * Markus Burth, 21.02.2022
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main() {
     
     /*                                                    
     
     // while Schleife
     int n = 1;
     int logorithmus;
     
     while (n <= 10) {
         
         if (n == 4 || n == 8) {
            cout << " Sorry keine Berechnung fuer " << n 
                 << " = " << logorithmus << endl;
         }
     
         else {
            logorithmus = log10(n);
            cout << " Logorithmus zur Basis 10 von " << n
                 << " = " << logorithmus << endl;
         }
         
         // Schleife muss unbedingt bei jedem Schleifendurchgang
         // veraendert (Iteration) werden
         n++;
     }*/
     
     /*
     // while Schleife mit continue
     int n = 0;
     int logorithmus;
     
     while(n < 10) {
         n++;
         
         if(n == 4 || n == 8) {
             continue;
         }
         
         logorithmus = log10(n);
         cout << " Logarithmus zur Basis 10 von " << n
              << " = " << logorithmus << endl;
     }*/
     
     // while Schleife mit break beenden
     double kubikzahl = 0.0;
     int zahl = 0;
     
     while(true) {
         cout << " Geben Sie eine Zahl ein (0) zum Beenden " << endl;
         cin >> zahl;
         
         if (zahl == 0) {
             break;
         }
         
         kubikzahl = pow(zahl, 3.0);
         cout << " " << zahl << " hoch 3 = " << kubikzahl << endl << endl;
     }
     return 0;
 }