/*
 * Typcasten in c++
 * Markus Burth, 20.02.2022
 */

#include <iostream>
#include <string>
#include <sstream>      // zwischen int und String umwandeln
using namespace std;

int main() {
    
    /*
    int n = 1;
    double r = 2.5;
    
    // casten in c
    // n = (int) r;
    
    // casten in c++
    n = static_cast<int>(r);    
    cout << "n = " << n << endl;
    */
    
    stringstream konvertierer;
    string s = "5";
    int n;
    
    // String in Zahlen umwandeln
    konvertierer << s;
    konvertierer >> n;
    konvertierer.clear();       // konvertierer loeschen
    cout << "n = " << n << endl;
    
    // Zahlen in String umwandeln
    konvertierer << n;
    konvertierer >> s;
    konvertierer.clear();
    cout << "s = " << s << endl;
    
    return 0;
}