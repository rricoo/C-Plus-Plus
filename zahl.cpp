#include <iostream>
using namespace std;

int main() {
	
	int zahl, zahl2, zahl3;
	
	cout << "Bitte geben Sie eine Zahl ein: "<< endl;
	cin >> zahl;
	cout << "Und eine weitere: "<< endl;
	cin >> zahl2;
	cout << "Bitte noch eine: "<< endl;
	cin >> zahl3;
	
	printf("%d * %d * %d = %d",zahl , zahl2, zahl3, zahl * zahl2 * zahl3);

return 0;
}