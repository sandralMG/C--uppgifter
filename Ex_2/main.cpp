#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int current;
	int last_year;
	int miles;
	float liter;
	float consumption;
	
	cout << "Vad står din mätarinställning på?" << endl;
	cin >> current;
	cout << "Vad stod den på för ett år sedan?" << endl;
	cin >> last_year;
	miles = current - last_year;
	cout << "Hur många liter bensin har förbrukats?" << endl;
	cin >> liter;
	cout << "Antal körda mil: " << miles << endl;
	cout << "Antal liter bensin: " << liter << endl;
	consumption = liter / miles;
	cout << "Förbrukning per mil " << consumption << endl;


	
	return 0;
}
