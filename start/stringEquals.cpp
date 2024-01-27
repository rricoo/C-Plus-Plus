/*
 * Zwei Stings miteinander vergleichen
 * Markus Burth, 20.02.2022
 */

#include <iostream>
#include <string>
#include <locale>
//#include <cstring>

using namespace std;

int main() {
    
    string s1 = "Rein";
    string s2 = "mein";
    
    locale loc("german");
    locale::global(loc);
    
    const char* cs1 = s1.c_str();
    const char* cs2 = s2.c_str();
    
    if(use_facet<collate<char> >(loc).compare(cs1, &cs1[strlen(cs1)],
                                             cs2, &cs2[strlen(cs2)]) < 0)
        cout << s1 << " < " << s2 << endl;
    else
        cout << s2 << " >= " << s2 << endl;
        
    return 0;
}

/*
 * Laenge eines Strings ausgeben
 * Markus Burth, 20.02.2022
 */

/*
#include<iostream>
#include<cstring>
 using namespace std;

 int main()
 {
    char buffer[80];

    cout << "Enter a string:";
    cin >> buffer;
    cout << strlen(buffer);

    return 0;
 }*/