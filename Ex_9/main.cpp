#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a,b,c;
	
	cout << "Skriv in tal 1" << endl;
	cin >> a;
	
	cout << "Skriv in tal 2" << endl;
	cin >> b;
	
	cout << "Skriv in tal 3" << endl;
	cin >> c;
	
	//Om a är störst
	if (a > b and a > c ) {
		cout << "Tal 1 är störst";
	}
	else if (b > a and b > c) {
		cout << "Tal 2 är störst";
	}
	
	else if (c > a and c > b) {
		cout << "Tal 3 är störst";
		
	}
	else {
		//Exempelvis talern är lika
		cout << "Något är fel";
	}
	
	
	return 0;
}
