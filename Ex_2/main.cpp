#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int current;
	int last_year;
	int miles;
	float liter;
	float consumption;
	
	cout << "Vad st�r din m�tarinst�llning p�?" << endl;
	cin >> current;
	cout << "Vad stod den p� f�r ett �r sedan?" << endl;
	cin >> last_year;
	miles = current - last_year;
	cout << "Hur m�nga liter bensin har f�rbrukats?" << endl;
	cin >> liter;
	cout << "Antal k�rda mil: " << miles << endl;
	cout << "Antal liter bensin: " << liter << endl;
	consumption = liter / miles;
	cout << "F�rbrukning per mil " << consumption << endl;


	
	return 0;
}
