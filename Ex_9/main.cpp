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
	
	//Om a �r st�rst
	if (a > b and a > c ) {
		cout << "Tal 1 �r st�rst";
	}
	else if (b > a and b > c) {
		cout << "Tal 2 �r st�rst";
	}
	
	else if (c > a and c > b) {
		cout << "Tal 3 �r st�rst";
		
	}
	else {
		//Exempelvis talern �r lika
		cout << "N�got �r fel";
	}
	
	
	return 0;
}
