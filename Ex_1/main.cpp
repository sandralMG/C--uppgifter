#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int current;
	int last_year;
	
	cout << "Vad st�r din m�tarinst�llning p�?" << endl;
	cin >> current;
	cout << "Vad stod den p� f�r ett �r sedan?" << endl;
	cin >> last_year;
	cout << "Din bil har g�tt " << current - last_year << " mil ";
	
	return 0;
}
