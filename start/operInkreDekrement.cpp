/*
 * Arithmetische Operatoren, Inkrement und Dekrement
 * Markus Burth, 19.02.2022
 */

#include <iostream>
using namespace std;

int main() {
    int z1 = 10;
    int z2 = 3;
    int erg;
    
    erg = z1 + z2;      // 13
    cout << erg << endl;
    erg = z1 - z2;      // 7
    cout << erg << endl;
    erg = z1 * z2;      // 30
    cout << erg << endl;
    erg = z1 / z2;      // 3
    cout << erg << endl;
    erg = z1 % z2;      // 1
    cout << erg << endl;
    
    erg = z1++;
    printf("z1++ erg: %d, z1: %d",erg, z1);
    erg = ++z1;
    printf("\n++z1 erg: %d, z1: %d",erg, z1);
    --z1;
    printf("\n--z1 erg: %d, z1: %d",erg, z1);
    z1--;
    printf("\nz1-- erg: %d, z1: %d\n",erg, z1);
    
    bool testerg;
    testerg = (z1 == z2);
    printf("z1 == z2: %d\n",testerg);
    //cout << testerg << endl;
    testerg = (z1 != z2);
    printf("z1 != z2: %d\n",testerg);
    //cout << testerg << endl;
    testerg = (z1 > z2);
    printf("z1 > z2: %d\n",testerg);
    //cout << testerg << endl;
    testerg = (z1 >= z2);
    printf("z1 >= z2: %d\n",testerg);
    //cout << testerg << endl;
    testerg = (z1 < z2);
    printf("z1 < z2: %d\n",testerg);
    //cout << testerg << endl;
    testerg = (z1 <= z2);
    printf("z1 <= z2: %d\n",testerg);
    //cout << testerg << endl;
    
    return 0;
    
}