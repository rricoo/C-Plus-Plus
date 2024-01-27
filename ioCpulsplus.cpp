/*
 * Ein- und Ausgabe in C++
 * Markus Burth, 14. Februar 2022
 */

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Enter an Integer: " << endl;
    cin >> num1;
    cout << "Enter another Integer: " << endl;
    cin >> num2;
    cout << "Enter one more Integer: " << endl;
    cin >> num3;
    
//    printf("Number 1 + Number 2 + NUmber 3 = %d", num1+num2+num3);
    printf("%d + %d + %d = %d \n", num1, num2, num3, num1+num2+num3);
    
    printf("%d * %d * %d = %d \n", num1, num2, num3, num1 * num2 * num3);
    
    return 0;
}