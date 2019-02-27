#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	
	float katet1, katet2, hypotenusa;
	
	cout << "Skriv in l\x84ngden p\x86 en katet: " << endl;
	cin >> katet1;
	cout << "Skriv in l\x84ngden p\x86 den andra kateten: " << endl;
	cin >> katet2;
	
	hypotenusa = sqrt(katet1*katet1 + katet2*katet2);
	
	cout << "Hypotenusan \x84r : " << hypotenusa << endl;
	
	return 0;
}
