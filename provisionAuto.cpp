/*
 * Programm das die Provision fuer ein Wagenverkauf
 * ausgibt.
 * Quelle: https://www.easy-coding.de/Thread/2006-Programm-zur-Berechnung-des-Verkaufspreises/
 * Markus Burth, 16.02.2022
 */

#include <iostream>
using namespace std;

int main() {
    double preis, rabatt, verkaufspreis;
    int zustand;
    const double provisionNeu = 10;
    const double provisionAlt = 5;
    
    cout << "Bitte geben Sie den Listenpreis ein: " << endl;
    cin >> preis;
    cout << "\nHier noch den Rabatt: ";
    cin >> rabatt;
    cout << "%" << endl;
    cout << "\nNeuwagen (1) oder Gebrauchtwagen (2) ?" << endl;
    cin >> zustand;
    
    verkaufspreis = preis * rabatt / 100;

    cout << "\nDer Verkaufspreis ist: " << verkaufspreis << " Euro" << endl;
    
    if(zustand == 1) {
        cout << "Sie bekommen " << verkaufspreis / provisionNeu << " Euro Provision." << endl;
    }
    
    if(zustand == 2) {
        cout << "Ihnen stehen " << verkaufspreis / provisionAlt << " Euro Provision zu." << endl;
    }
    
    return 0;
}