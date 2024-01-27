/*
 * Gerade oder ungerade Zahlen erkennen
 * mit Bitoperatoren oder Modulo
 * Markus Burth, 17.02.2022
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int op1 = 97;
    int op2 = 223;
    
    /*int ergebnis = op1 & op2;
    cout << ergebnis << endl;*/
    
    // In der Ausgabe rechnen
    printf("%d & %d = %d\n",op1, op2 , op1 & op2);      // 65
    printf("%d && %d = %d\n", op1, op2, op1 && op2);    // 1 
    printf("%d + %d = %d\n", op1, op2, op1 + op2);      // 320
    
    // Gerade oder ungerade Zahlen erkennen mit Bitoperatoren
    int zahl;
    
    cout <<"\nBitte eine ganze Zahl eingeben: " << endl;
    cin >> zahl;
    
    int ergebnis = zahl & 1;
    
    if(ergebnis == 0) {
        printf("\n%d ist eine gerade Zahl.", zahl);
    }
    
    else {
        printf("\n%d ist eine ungerade Zahl.", zahl);
    }
    
    // Gerade oder ungerade Zahlen mit Modulo erkennen
    int zahl2;
    
    cout <<"\nBitte geben Sie eine ganze Zahl ein: " << endl;
    cin >> zahl2;
    
    if(zahl %2 == 0) {
        printf("\n%d ist gerade.",zahl2);
    }
    
    else {
        printf("\n%d ist ungede.", zahl2);
    }
    
    return 0;
}