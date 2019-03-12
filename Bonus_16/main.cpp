#include <iostream>

using namespace std;


whileMax(int heltal) {
	
	int max;
	cout << "Skriv in ett heltal" << endl;
	cin >> max;
	
	while(heltal <= max) {
		cout << "Skriv in ett heltal" << endl;
		cin >> max;
	}
	
}
	
int main(int argc, char** argv) {
	
	cout << "Test" << endl;
	whileMax(9);
	cout << "Kommit så här långt";
	return 0;
}
