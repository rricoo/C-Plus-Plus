/*
 * Einfache Switch-Case Kontrollstruktur
 * Markus Burth, 20.02.2022
 */
 
 #include <iostream>
 using namespace std;
 
 int main() {
     int n;
     
     cout << " Hast Du vielleicht eine Zahl zwischen 1"
          << " und 3 fuer mich?" << endl << endl;
     cin >> n;
     
     switch(n) {
         case 1:  cout << " Knauser, eine kleinere Zahl hast "
                       << " Du wohl nicht gefunden?";
                  cout << endl;
                  break;
                  
         case 2:  cout << " Etwas mittelmaessig, findest Du nicht? ";
                  cout << endl;
                  break;
                  
         case 3:  cout << " Wohl groessenwahnsinnig geworden? ";
                  cout << endl;
                  break;
                  
         default: cout << " Zahlen sind wohl nicht gerade Deine Staerke ";
                  cout << endl;
     }
     return 0;
 }