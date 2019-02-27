#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float vara1, vara2;
	float kilo_pris1, kilo_pris2;
	float moms = 1.12;
	int pris1, pris2;
	
	cout << "Hur mycket väger vara 1? " << endl;
	cin >> vara1;	
	cout << "Hur mycket väger vara 2? " << endl;
	cin >> vara2;
	
	cout << "Kilopris vara 1? " << endl;
	cin >> kilo_pris1;	
	cout << "Kilopris vara 2? " << endl;
	cin >> kilo_pris2;	
	
	pris1 = vara1 * kilo_pris1 * 1.12;
	pris2 = vara2 * kilo_pris2 * 1.12;
	
	cout << "*******************************" << endl;
 	cout << "Vara 1 kostar: " << pris1 << endl;
 	cout << "*******************************" << endl;
 	cout << "Vara 2 kostar: " << pris2 << endl;
 	cout << "*******************************" << endl;
	
	return 0;
}
