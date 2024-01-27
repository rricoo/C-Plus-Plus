/*
 * Switch Kontrollstruktur
 * Markus Burth, 20.02.2022
 */
 
 #include <iostream>
 using namespace std;
 
 int main() {
     
     double zahl1, zahl2;
     char op;
     
     cout << endl << "Ein kleiner Taschenrechner" << endl << endl;
     cout << "Geben Sie eine Zahl ein: Zahl Operator Zahl <Return>" << endl;
     cout << endl << endl;
     
     cin >> zahl1 >> op >> zahl2;
     
     switch(op) {
         case '+': cout << "= " << (zahl1 + zahl2) << endl;
                   break;
                  
         case '-': cout << "= " << (zahl1 - zahl2) << endl;
                   break;
                   
         case 'X':
         case 'x':
         case '*': cout << "= " << (zahl1 * zahl2) << endl;
                   break;
        
         case ':':
         case '/': cout << "= " << (zahl1 / zahl2) << endl;
                   break;
                   
         default : cout << "Operation nicht bekannt" << endl;
         
     }
     cout << endl;
     return 0;
 }