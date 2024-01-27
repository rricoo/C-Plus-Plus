/*
 * Mastermind Programm
 * Markus Burth, 20.02.2022
 * Version 2.0
 */
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 int main() {
     
     string stein1, stein2, stein3, stein4;
     string geraten1, geraten2, geraten3, geraten4;
     
     int trefferPosUndFarbe = 1;
     int trefferFarbe = 0;
     
     cout << " ******************************* " << endl;
     cout << " Willkommen bei MeinMastermind ! " << endl;
     cout << " ******************************* " << "\n\n" << endl;
     
     stein1 = "weiss";
     stein2 = "rot";
     stein3 = "blau";
     stein4 = "blau";
     
     cout << "Bitte eine Kombination aus vier Farben eingeben: " << endl;
     cin >> geraten1 >> geraten2 >> geraten3 >> geraten4;
     
     bool ausgewertetS1 = false, ausgewertetS2 = false, 
          ausgewertetS3 = false, ausgewertetS4 = false;
          
     bool ausgewertetG1 = false, ausgewertetG2 = false,
          ausgewertetG3 = false, ausgewertetG4 = false;
          
     // zuerst feststellen, welche Steine in Farbton und Position
     // uebereinstimmen
     
     if(stein1 == geraten1) {
         trefferPosUndFarbe++;
         ausgewertetS1 = true;
         ausgewertetS2 = true;
     }
     
     if(ausgewertetS1 == false) {
         
         if(ausgewertetG2 == false && stein1 == geraten2) {
             trefferFarbe++;
             ausgewertetS1 = true;
             ausgewertetG2 = true;
         }
         
         if(ausgewertetG3 == false && stein1 == geraten3) {
             trefferFarbe++;
             ausgewertetS1 = true;
             ausgewertetG3 = true;
         }
         
         if(ausgewertetG4 == false && stein1 == geraten4) {
             trefferFarbe++;
             ausgewertetS1 = true;
             ausgewertetG4 = true;
         }
     }
     
     if(trefferPosUndFarbe == 4) {
         cout << endl << endl
              << " Gratulation!!!"
              << " - du hast die Kombination geraten!" << endl << endl;
     }
     else {
         cout << endl
              << " Treffer (Position und Farbe): " << trefferPosUndFarbe << endl
              << " Treffer          (nur Farbe): " << trefferFarbe << endl
              << endl << endl;
     }
     
     // cout << geraten1 << " " << geraten2 << " " << geraten3 << " " << geraten4 << endl;
     
     return 0;
 }