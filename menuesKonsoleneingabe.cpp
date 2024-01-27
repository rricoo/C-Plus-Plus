/*
 * Menues fuer Konsoleneingaben
 * Markus Burth, 21.02.2022
 */
 
 #include <iostream>
 using namespace std;
 
 int main() {
     
     char eingabe;
     
     do {
         cout << endl;
         cout << " Festplatte formatieren        <a> " << endl;
         cout << " Festplatte waschen            <b> " << endl;
         cout << " Festplatte trocknen           <c> " << endl;
         cout << " Beenden                       <d> " << endl;
         cout << endl;
         
         cout << " Ihre Eingabe: ";
         cin >> eingabe;
         cout << endl;
         
         switch(eingabe) {
             
             case 'a' : cout << " Festplatte wird gereinigt " << endl;
                        cout << " krrrrrkrrrr ssst" << endl;
                        break;
            
             case 'b' : cout << " Festplatte wird gewaschen " << endl;
                        cout << " schrubb schrubb " << endl;
                        break;
                        
             case 'c' : cout << " Festplatte wird getrocknet " << endl;
                        cout << " ssssssssssssssss " << endl;
                        break;
                        
             case 'd' : cout << " Programm wird beendet " << endl;
                        break;
                        
             default  : cout << " Ungueltige Eingabe " << endl;
         }
         cout << endl;  
     }
     while (eingabe != 'd');
     
     return 0;
 }