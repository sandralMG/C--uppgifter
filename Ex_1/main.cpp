#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int current;
	int last_year;
	
	cout << "Vad står din mätarinställning på?" << endl;
	cin >> current;
	cout << "Vad stod den på för ett år sedan?" << endl;
	cin >> last_year;
	cout << "Din bil har gått " << current - last_year << " mil ";
	
	return 0;
}
