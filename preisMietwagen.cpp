/*
 * Preisberechnung eines Mietwagens
 * Markus Burth, 14.02.2022
 */
 
 #include <iostream>
 using namespace std;
 
 int main(void) {
     int weiter = 1;
     int wagenGroesse, mietzeit;
     double kilometer, preisKilometer, freiKilometer, kosten;
     
     while(weiter == 1) {
         
         // Diese Ein- und Ausgabe funktioniert nur in C++
         cout << "Wagenkategorie (1) klein oder (2) gross: " << endl;
         cin >> wagenGroesse;
         cout << "Mietzeit (Anzahl der Tage): " << endl;
         cin >> mietzeit;
         cout << "Gefahrene Kilometer: " << endl;
         cin >> kilometer;
         
         if(wagenGroesse = 1) {
             freiKilometer = 60;
             preisKilometer = kilometer * 0.4;
             kosten = freiKilometer + preisKilometer;
         }
         
         if(wagenGroesse = 2) {
             freiKilometer = 90;
             preisKilometer = kilometer * 0.6;
             kosten = freiKilometer + preisKilometer;
         }
         
         printf("Die Miete des Waagens kostet %.2f Euro.\n\n",kosten);
         
         printf("Nochmal (1) oder Ende (0)?");
         scanf("%d", &weiter);
     }
 }