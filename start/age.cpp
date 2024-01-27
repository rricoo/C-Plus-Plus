/*
 * Programm zur Altersabfrage
 * Markus Burth, 20.02.2022
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string vorname, name;
    int alter;
    
    cout << "\nWie ist Dein Vorname: " << endl;
    cin >> vorname;
    
    cout << "\nWie ist Dein Nachname: " << endl;
    cin >> name;
    
    cout << "\nWie alt bist Du? " << endl;
    cin >> alter;
    
    string begruessung = "\nHallo " + vorname +" "+ name;
    
    if(alter >= 18) {
        cout << begruessung << endl;
    }
    else {
        cout << begruessung << ", Du bist leider nicht alt genug.";
    }
    
    return 0;
}