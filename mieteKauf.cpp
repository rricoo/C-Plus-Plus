/*
 * Kalkulation fuer Automiete oder Verkauf
 * rico, 19.02.2022
 */
 
 #include <iostream>
 #include <sstream>
 #include <string>
 using namespace std;
 
 int main() {
	 
	string mystr, name;
	int auswahl;
	int loop = 1;
	int wagenGroesse, mietZeit;
	double kilometer, preisKilometer, freiKilometer, kosten, kostenMiet, provision;
	const int provisionMiet = 5;
	const int provisionNeu = 20;
	const int provisionAlt = 10;
		
	cout << " ******************* " << endl;
	cout << "  Autohaus Beispiel  " << endl;
	cout << " ******************* \n" << endl;
	
	cout << " Willkommen Wie ist Ihr Name? " << endl;
	getline(cin, mystr);
	stringstream(mystr) >> name;
	
    anfang:
	cout << " \nMieten (1) oder Kaufen (2) " << endl;
	cin >> auswahl;
	
	while(loop == 1) {
	
		if(auswahl == 1) {
		
			// Eingabe der Mietdaten
			eingabe:
			
			cout << " Gefahrene Kilometer " << endl;
			cin >> kilometer;
		
			if(kilometer <= 0) {
				cout << " Bitte ein Wert groesser als \"0\" eingeben! " << endl;
			}
			
			else if(kilometer != 0 && kilometer < 40075) {
			    
			}
			
			else if(kilometer >= 40075) {
				int erdeUmrundung = (int) kilometer %40075;			// Berechnung aendern
				printf(" Respekt fuer die %d fache Erdumrundung ", erdeUmrundung);
				cout << " Bitte seinen Sie realistisch! " << endl;
			}
		
			else {
				cout << " Bitte neu eingeben! " << endl;
			}
			
			cout << " Wagenkategorie (1) klein oder (2) gross: " << endl;
			cin >> wagenGroesse;
			
			if(wagenGroesse == 1) {
			    if(kilometer <= 60) {
			        preisKilometer = 0;
			    }
			    else {
			        preisKilometer = kilometer * 0.4;
			    }
			}
			if(wagenGroesse == 2) {
			    if(kilometer <= 90) {
			        preisKilometer = 0;
			    }
			    else { 
			        preisKilometer = kilometer * 0.6;
			    }
			}
//		    else {
//		        cout << " Falscher Wert, Bitte neu eingeben \n! " << endl; 
//				break;
//			}
	
			cout << " Mietzeit (Anzahl in Tage) " << endl;
			cin >> mietZeit;
		
			if(mietZeit <= 0) {
				cout << " Bitte einen grosseren Wert eingeben " << endl;
				continue;
			}
			
			else if(mietZeit >= 1 || mietZeit <= 364) {
			    // continue;
			}
		
			else if(mietZeit >= 365) {                   // Schaltjahr noch nicht beruecksichtigt
				cout << " Laenger als ein Jahr geht leider nicht! " << endl;
			}
		
			else {
				cout << " Vielleicht waere ein Kauf doch besser. " << endl;
			}
				
			// Ausgabe Mietkosten und Provision addieren
			if(freiKilometer <= 60 || freiKilometer <= 90) {
			
			kostenMiet = preisKilometer * mietZeit;
			provision = (kostenMiet * provisionMiet) / 100;
			printf(" Die Miete des Wagens kostet %.2f Euro", kostenMiet);
		}
		if(auswahl == 2) {
			
			// Eingaben der Verkaufsdaten
			double preis, rabatt, verkaufspreis;
			int zustand;
			
			cout << " \nBitte geben Sie den Listenpreis ein: " << endl;
			cin >> preis;
			
			cout << " \nHier noch den Rabatt (in %): " << endl;
			cin >> rabatt;
			
			cout << " \nNeuwagen (1) oder Gebraucht (2) ? " << endl;
			cin >> zustand;
			
			verkaufspreis = preis * rabatt / 100;
			cout << " \nDer Verkaufspreis ist: " << verkaufspreis << " Euro " << endl;
			
			// Provision ausrechnen, Neuwagen oder Gebrauchter
			if (zustand == 1) {
				provision = verkaufspreis * provisionNeu / 100;
			}
			else {
				provision = verkaufspreis * provisionAlt / 100;
			}
		}
//      else{
//          cout << "\nBitte entweder (1) oder (2) eingeben!";
//          loop = 1;
//          goto anfang;
//      }
	cout << " \nWollen Sie noch ein Wagen erfassen ? " << endl;
	cout << " Fuer Ja (1) ansonsten (0) " << endl;
	cin >> loop;
	}	

	printf(" Hallo %s Ihre Provision ist %.2f Euro ", name.c_str(), provision);
	//cout << " Hallo " << name << " Ihre Provision ist " << provision << " Euro " << endl;
		
	return 0;
}}
