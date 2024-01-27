/*
 * Programm das den Benutzer begruesst
 * Markus Burth, 17.02.2022
 */
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 int main() {
     
     string vorname, nachname;
     
     cout << "\nHallo wie ist Dein Vorname? " << endl;
     cin >> vorname;
     
     cout << "\nVerraetst Du mir auch Dein Nachnamen? " << endl;
     cin >> nachname;
     
     cout << "\nHallo " << vorname <<" " << nachname 
     << " schoen Dich zu sehen.\n" << endl;
     
     return 0;
 }