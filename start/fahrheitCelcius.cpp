/*
 * Fahrenheit in Celcius umrechnen
 * Markus Burth, 20.02.2022
 */
 
 #include <iostream>
 using namespace std;
 
 int main() {
     double fahrenheit, celcius;
     
     cout << "Bitte geben Sie eine Temperatur in Fahrenheit ein: " << endl;
     cin >> fahrenheit;
     
     celcius = (fahrenheit - 32) * 5.0 / 9.0;
     //cout << " " << fahrenheit
     //     << " Grad Fahrenheit entsprechen "
     //     << celcius << " Grad Celcius" << endl;
     
     printf("%.2f Grad Fahrenheit entsprechen %.2f Grad Celcius",fahrenheit,celcius);
          
     return 0;
 }